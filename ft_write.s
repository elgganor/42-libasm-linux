	section .text
	global ft_write
	extern ___error

ft_write:
	mov rax, 0x02000004
	syscall
	jc error
	ret

error:
	neg rax
	mov rdx, rax
	call ___error
	mov [rax], rdx
	mov rax, -1
	ret
