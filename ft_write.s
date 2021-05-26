section .text:
        global ft_write
        extern __errno_location

ft_write:
    mov rax, 1
    syscall
    cmp rax, 0
    jl error
    ret

error:
    mov r15, rax
    neg r15
    call __errno_location
    mov [rax], r15
    mov rax, -1
    ret