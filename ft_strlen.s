section .text
		global ft_strlen
 
ft_strlen:
	mov rax, 0 ;initialise compteur a zero

loop:
	cmp byte [rdi + rax], 0 ;compare le byte de rdi (1ere parametre) a la position rax (compteur) au \0
	je stop ;si flag equal on stop (\0 atteint)
	jne continue ;si flag non equal on continue

continue:
	inc rax ;incremente rax
	jmp loop ;retourne a la fonction loop

stop:
	ret ;return final