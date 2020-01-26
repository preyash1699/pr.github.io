data segment
	bcd db ?
	asci dw 3638h
data ends

code segment
	Assume cs:code, ds:data
start:	mov ax,data
		mov ds,ax
		mov ax,asci
		mov bx,3030h
		sub ax,bx
		mov cl,04h
		shl ah,cl
		add al,ah
		mov bcd,al
		int 3

code ends
end start