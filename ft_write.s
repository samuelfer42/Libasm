section .text:
        global ft_write
        extern __errno_location

ft_write:
    mov rax, 1 ; syscall write = (rax = 1 )
    syscall ; appel de write
    cmp rax, 0 ; compare retour de write (rax) a 0
    jl error ; si rax < 0 jump a erreur
    ret ; return rax (valeur retour de write)

error:
    mov r15, rax ; save le retour de write (errno)
    neg r15 ; inverse le signe
    call __errno_location ; donne l'addresse de errno
    mov [rax], r15 ; modifie errno
    mov rax, -1 ; return -1
    ret