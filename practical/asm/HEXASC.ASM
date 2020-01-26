data segment 
	hex db 0bh
	asci db ?
data ends

code segment
	Assume cs:code, ds:data
start:	mov ax,data
		mov ds,ax
		mov bl,hex
		cmp bl,09h
		jbe next1
		cmp bl,0fh
		jbe next2
		jbe error
next1:	add bl,30h
		jbe store
next2:	add bl,37h
		jbe store
error:	mov bl,0ffh
store:	mov asci,bl
		int 3

code ends
end start