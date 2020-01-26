data segment
	arr db 20h, 35h, 25h, 15h, 36h
	smal db ?
data ends

code segment
	Assume cs:code, ds:data
start:	mov ax,data
		mov ds,ax
		lea si,arr
		mov cx,0004h
		mov al,[si]
		inc si
again:	cmp al,[si]
		jc next
		mov al,[si]
next:	inc si
		loop again
		mov smal,al
		int 3

code ends
end start