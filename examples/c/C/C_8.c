int main()
{
    char helloworld[] = "Hello World";
    char* ptr;
    // Point first character and loop till null
    for (ptr = helloworld; *ptr != '\0'; ptr++) {
        printf("%c", *ptr);
    }
    return 0;
}
