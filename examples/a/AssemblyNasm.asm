segment .text
global _start


section .data
xx db 'Hello world', 0xa
len equ $ - xx

section .text

_start:
	mov rax, 0
	mov rcx, 0
	mov rbx, 0
	mov rsi, 0
	mov rdx, 0

	mov rax, 1
	mov edx, len
	mov rsi, xx
	mov rdi, 1
	syscall

	mov rax, 60
	xor rdi, rdi
	syscall



