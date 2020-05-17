section .text
	global _ft_strlen
_ft_strlen:
	mov rax, 0
while:
	cmp byte [rdi + rax], 0
	je endwhile
	inc rax
	jmp while
endwhile:
	ret
