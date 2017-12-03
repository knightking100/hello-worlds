REM prints "Hello World!" one character at a time

hello$ = "Hello World!"
FOR i = 1 TO LEN(hello$)
    CLS
    PRINT LEFT$(hello$, i)
    _DELAY .5
NEXT i
END
