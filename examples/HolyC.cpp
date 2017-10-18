  asm {
  HELLO_WORLD::
        PUSH    RBP
        MOV     RBP,RSP
        MOV     RAX,'Hello '
        CALL    &PUT_CHARS
        MOV     RAX,'World\n'
        CALL    &PUT_CHARS
        LEAVE
        RET
  }
  Call(HELLO_WORLD);
  PutChars('Hello ');
  PutChars('World\n');
