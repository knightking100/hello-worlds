HelloWorld:
mov r0,#4 @set x position
mov r1,#1 @set y position
ldr r2,=HelloWorldMsg @Load message into register
swi 0x204 @display ascii message in LCD output
swi 0x203 @prevents a saved keypad input when returning to "Running" (this is detecting numpad input)
@bal HelloWorld - If you want to loop the message for certain scenarios!
HelloWorldMsg: .asciz "Hello, world!"
@By https://github.com/KaliShark