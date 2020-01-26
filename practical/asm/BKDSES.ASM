data segment 
	block1 db 10h, 11h, 12h, 13h, 14h
data ends

extra segment
	block2 db 5 dup(?)	
extra ends

code segment
	Assume cs:code, ds:data, es:extra
start:	mov ax,data
		mov ds,ax
		mov ax,extra
		mov es,ax
		lea si,block1
		lea di,block2
		mov cx,0005h
		cld
		rep movsb
		int 3

code ends
end start