section .text:
        global ft_strcpy

ft_strcpy:
    mov rax, rdi
    jmp loop

loop:
    mov bl, byte [rsi]
    cmp bl, 0
    je stop
    mov byte [rdi], bl
    inc rsi
    inc rdi
    jmp loop

stop:
    mov byte [rdi], 0
    ret