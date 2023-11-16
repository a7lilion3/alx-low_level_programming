		global	main
		extern	printf

		section	.text
main:
		push	rbp
		mov		rdi, msg
		mov		rax, 0
		call	printf
		pop		rbp
		mov		rax, 0
		ret
msg:
		db		"Hello, Holberton", 10, 0
