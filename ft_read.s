section .text:
        global ft_read
        extern __errno_location

ft_read:
    mov rax, 0
    syscall
    cmp rax, 0
    jl error
    ret

error:
    mov r15, rax ; sauvegarde le retour de write = errno
    neg r15 ; inverse le signe
    call __errno_location ; donne l'addresse de errno
    mov [rax], r15 ; modifie errno
    mov rax, -1 ; return -1
    ret