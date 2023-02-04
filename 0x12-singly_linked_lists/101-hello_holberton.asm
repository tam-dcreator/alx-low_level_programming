	section .data
hello:		db "Hello, Holberton", 10 ;string to print
helloLen:	equ $-hello	  ;length of string

	section .text
	global main
main:
	mov	rax,1		;sys_write
	mov	rdi,1		;stdout
	mov	rsi,hello	;message to write
	mov	rdx,helloLen	;message length
	syscall			;call kernel


	;;end program
	mov	rdi,0		;process exit code
