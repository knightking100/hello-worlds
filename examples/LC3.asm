        .ORIG x3000
        LEA R0, text
        PUTS
        HALT
text    .STRINGZ "Hello World!"
        .END
