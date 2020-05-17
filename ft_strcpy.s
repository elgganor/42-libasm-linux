	section .text
	global _ft_strcpy
_ft_strcpy:
	mov		rcx, 0
while:
	mov bl, byte [rsi + rcx]
	cmp bl, 0
	je end
	mov byte [rdi + rcx], bl
	inc rcx
	jmp while
end:
	mov bl, 0
	mov byte [rdi + rcx], bl
	mov rax, rdi
	ret