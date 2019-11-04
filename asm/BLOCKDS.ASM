data segment
    block1 db 10h, 11h, 12h, 13h, 14h
    block2 db 5 dup(?)
data ends

code segment
    Assume cs:code, ds:data
start:  mov ax,data
        mov ds,ax
        lea si, block1
        lea di, block2
        mov cx, 0005h

again:  mov bl, [si]
        mov [di], bl
        inc si
        inc di
        loop again
        int 3

code ends
end start