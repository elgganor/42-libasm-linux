	section .text
	global ft_read
	extern __errno_location

ft_read:
	mov rax, 0x02000003
	syscall
	jc error
	ret

error:
	neg rax
	mov rdx,rax
	call __errno_location
	mov [rax],rdx
	mov rax,-1
	ret
