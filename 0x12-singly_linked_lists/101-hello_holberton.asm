section .data
message db 'Hello, Holberton', 10, 0
section .text
	extern printf
	global main
main:
	mov rdi,message
	xor rax,rax

	call printf

	xor edi, edi
	syscall
