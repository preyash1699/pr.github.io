data segment
	arr db 20h, 30h, 15h, 35h, 25h
	lag db ?
data ends

code segment
	Assume cs:code, ds:data
start:	mov ax,data
		mov ds,ax
		lea si,arr
		mov cx, 0004h
		mov al,[si]
		inc si
again:	cmp al,[si]
		jnc next
		mov al,[si]
next:	inc si
		loop again
		mov lag,al
		int 3

code ends
end start
