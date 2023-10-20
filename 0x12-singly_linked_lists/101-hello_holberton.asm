section .data
	message db "Hello, Holberton", 0
	format db "%s", 10, 0

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
