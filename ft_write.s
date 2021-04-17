section .text:
        global ft_write
        extern __errno_location

ft_write:
    mov rax, 1 ; prepare rax pour le syscall write = 1
    syscall ; call write
    cmp rax, 0 ; compare retour de write a 0
    jl error ; si rax < 0 jump a erreur
    ret ; sinon return rax retourne par write

error:
    mov r15, rax ; sauvegarde le retour de write = errno
    neg r15 ; inverse le signe
    call __errno_location ; donne l'addresse de errno
    mov [rax], r15 ; modifie errno
    mov rax, -1 ; return -1
    ret