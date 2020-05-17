	section .text
	global _ft_strcmp
_ft_strcmp:
	mov rcx, -1
while:
	inc rcx
	mov al, byte [rdi + rcx]
	mov bl, byte [rsi + rcx]
	cmp al, 0
	je end
	cmp bl, 0
	je end
	cmp al, bl
	je while
end:
	movzx rax, al
	movzx rbx, bl
	sub rax, rbx
	ret