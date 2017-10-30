/*
    An example showing how to display a "Hello World" 
    in the Serial Monitor of Arduino using the Brasilino library.
    You can see more about the Brasilino library in https://github.com/OtacilioN/Brasilino
*/    

// Including the Brasilino Library
#include <Brasilino.h>

funcao configurar() {
    // setting up the serial 
    iniciarSerial();
    escreverSerialn("Hello World!");
}

funcao repetir() {
}