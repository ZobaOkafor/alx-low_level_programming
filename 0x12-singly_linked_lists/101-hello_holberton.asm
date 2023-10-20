section .data
	message db "Hello, Holberton", 0xa
	format db "%s", 0

section .text
	global main

extern printf, exit

main:
	push rbp
	mov rdi, format
	mov rsi, message
	call printf

	mov rdi, 0
	call exit
