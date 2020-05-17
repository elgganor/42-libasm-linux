	section .text
	global _ft_write
	extern __errno_location

_ft_write:
	mov rax, 0x02000004
	syscall
	jc error
	ret

error:
	neg rax
	mov rdx, rax
	call __errno_location
	mov [rax], rdx
	mov rax, -1
	ret
