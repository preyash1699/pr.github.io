data segment 
	arr db 50h, 22h, 11h, 75h, 80h, 13h
data ends

code segment
	Assume cs:code, ds:data
start:	mov ax,data
		mov ds,ax
		mov bl, 05h
again:	mov bh,bl
		lea si, arr
back:	mov al,[si]
		inc si
		cmp al,[si]
		jc next
		xchg al,[si]
		mov [si-1],al
next:	dec bh
		jnz back
		dec bl
		jnz again
		int 3
		
code ends
end start