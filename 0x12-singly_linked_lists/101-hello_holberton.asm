section .txt
globa main

main;
mov rax, 1
mov rdi, 1
mov rsi, msg
mov rdx, msglen
syscall

mov rax, 60
mov rdi, 0
syscall

setion .rodata
	msg: db "Hello, Holberton", 10
	msglen: equ $ - msg
