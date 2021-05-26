section .text
		global ft_strlen
 
ft_strlen:
	mov rax, 0

boucle:
	cmp byte [rdi + rax], 0
	je stop
	jne ajoute

ajoute:
	inc rax
	jmp boucle

stop:
	ret