#include<stdio.h>
#include<stdlib.h>

#ifdef __APLE__
#include <OpenCL/opencl.h>
#else
#include <CL/opencl.h>
#endif

#define HELLO_WORLD_SIZE 13

void *alignedMalloc(size_t size);
void alignedFree(void *ptr);

int main() {
    cl_platform_id platform_id;
    cl_device_id device_id;
    cl_context context;
    cl_command_queue command_queue;
    cl_program program;
    cl_kernel kernel;

    cl_mem cl_outBuffer;

    // load source as character array instead from another file
    char cl_source[] = "__kernel void helloWorld(__global char* out) {"
    "   out[0] = 'H';"
    "   out[1] = 'e';"
    "   out[2] = 'l';"
    "   out[3] = 'l';"
    "   out[4] = 'o';"
    "   out[5] = ' ';"
    "   out[6] = 'W';"
    "   out[7] = 'o';"
    "   out[8] = 'r';"
    "   out[9] = 'l';"
    "   out[10] = 'd';"
    "   out[11] = '!';"
    "}";
    size_t cl_source_size = sizeof(cl_source);
    char* cl_sourcePtr = &cl_source[0];

    size_t bufferSize = sizeof(char)*HELLO_WORLD_SIZE;
    char *h_outBuffer = (char*)alignedMalloc(bufferSize);

#define CHECK(_x) \
    if(status != CL_SUCCESS) { \
        fprintf(stderr, "%s\n", _x);\
        return EXIT_FAILURE;\
    }

    cl_int status;
    status = clGetPlatformIDs(1, &platform_id, NULL);
    status |= clGetDeviceIDs(platform_id, CL_DEVICE_TYPE_ALL, 1, &device_id, NULL);
    CHECK("Unable to get a valid device");

    context = clCreateContext(NULL, 1, &device_id, NULL, NULL, &status);
    CHECK("Unable to create a context");

    command_queue = clCreateCommandQueue(context, device_id, 0, &status);
    CHECK("Unable to create a command queue");

    cl_outBuffer = clCreateBuffer(context, CL_MEM_READ_WRITE, bufferSize, NULL, &status);
    CHECK("Unable to create a memory object");

    program = clCreateProgramWithSource(context, 1, (const char**)&cl_sourcePtr, (const size_t*)&cl_source_size, &status);
    CHECK("Unable to create a program");

    status = clBuildProgram(program, 1, &device_id, NULL, NULL, NULL);
    CHECK("Unable to build the program");

    kernel = clCreateKernel(program, "helloWorld", &status);
    status |= clSetKernelArg(kernel, 0, sizeof(cl_outBuffer), (void*)&cl_outBuffer);
    status |= clEnqueueTask(command_queue, kernel, 0, NULL, NULL);
    CHECK("Unable to execute kernel");

    status = clFinish(command_queue);
    status |= clEnqueueReadBuffer(command_queue, cl_outBuffer, CL_TRUE, 0, bufferSize, h_outBuffer, 0, NULL, NULL);
    CHECK("Unable to read output data");

    printf("%s\n", h_outBuffer);

    status = clReleaseKernel(kernel);
    status |= clReleaseProgram(program);
    status |= clReleaseMemObject(cl_outBuffer);
    status |= clReleaseCommandQueue(command_queue);
    status |= clReleaseContext(context);
    CHECK("Unable to release OpenCL Objects");

    alignedFree(h_outBuffer);

    return EXIT_SUCCESS;
}

#define ALIGNMENT 64
void *alignedMalloc(size_t size) {
#ifdef _WIN32
    return _aligned_malloc(size, ALIGNMENT);
#else
    void *result = NULL;
    posix_memalign(&result, ALIGNMENT, size);
    return result;
#endif
}

void alignedFree(void *ptr) {
#ifdef _WIN32
    _aligned_free(ptr);
#else
    free(ptr);
#endif
}
