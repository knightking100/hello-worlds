.data
	line: .asciiz "Hello World\n"

.text
	main:
		la $a0, line
		li $v0, 4
		syscall
		
		li $v0, 10
		syscall
