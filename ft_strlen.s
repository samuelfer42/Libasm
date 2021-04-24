section .text
	global ft_strlen
 
ft_strlen:
	mov rax, 0 ; compteur a 0

boucle:
	cmp byte [rdi + rax], 0 ; compare le byte de rdi (1ere parametre) a la position rax (compteur) au \0
	je stop ; si flag equal on stop (\0 atteint)
	jne ajoute ; si flag non equal on continue

ajoute:
	inc rax ; incremente rax
	jmp boucle ; retourne a la fonction boucle

stop:
	ret ; return final