section	.text:
		global ft_strcpy

ft_strcpy:
	mov rcx, -1        

start:
	inc rcx
	cmp	byte [rsi + rcx], 0   
	je	return		
    mov al, byte [rsi + rcx]
	mov	byte [rdi + rcx], al  
	jmp	start    
		             
return:	
	mov	byte [rdi + rcx], 0   
	mov	rax, rdi             
	ret