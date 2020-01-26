data segment
	bcd db 65h
	asci dw ?
data ends

code segment
	Assume cs:code, ds:data
start:	mov ax,data
		mov ds,ax
		mov bl,bcd
		mov bh,bcd
		and bl,0fh
		and bh,0f0h
		mov cl,04h
		shr bh,cl
		add bx,3030h
		mov asci,bx
		int 3

code ends
end start