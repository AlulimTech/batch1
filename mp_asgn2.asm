%macro write 2
mov rax,1
mov rdi,1
mov rsi,%1
mov rdx,%2
syscall
%endmacro

%macro read 2
mov rax,0
mov rdi,0
mov rsi,%1
mov rdx,%2
syscall
%endmacro

section .data

msg: db "enter the first string max 11 characters",10
msglen equ $-msg
msg1: db 10
 

menu: db "MENU  OPTIONS ",10
      db "1. overlapped block transfer with string instruction",10
      db "2. overlapped block transfer without string instruction",10
      db "3. non-overlapped block transfer with string instruction",10
      db "4. non-overlapped block transfer without string instruction",10
      db "5. exit",10
menulen equ $-menu

choice1: db "enter your choice",10
choice1len equ $-choice1
 
display1: db "1. overlapped block transfer with string instruction",10
display1len equ $-display1

display2: db "2. overlapped block transfer without string instruction",10
display2len equ $-display2

display3: db "3. non-overlapped block transfer with string instruction",10
display3len equ $-display3

display4: db "4. non-overlapped block transfer without string instruction",10 
display4len equ $-display4
      

section .bss

str1: resb 11
str2: resb 10
choice: resb 2
str1len: resq 1
temp: resq 1



section .text 
global _start
_start:


mainmenu:

write menu,menulen
write choice1,choice1len
read choice,2

cmp byte[choice],31H
je overlapstr1

cmp  byte[choice],32H
je overlapstr2

cmp byte[choice],33H
je nonoverlapstr3

cmp byte[choice],34H
je nonoverlapstr4

cmp byte[choice],35H
je exit

overlapstr1: write display1,display1len
write msg,msglen        ;write the msg
read str1,11            ;read the string from user


dec rax                 ;the length stored in rax is decremented by 1
mov qword[str1len],rax  ;mov value of rax to variable str1len of qword type
mov qword[temp],rax     ;mov value of rax to variable temp of qword type

mov rsi,str1            ;rsi will point to the address of str1[base address]
mov rdi,str2            ;rdi will point to the address of str2[base address]
dec rdi                 ;rdi will point to enter character

add rsi,qword[temp]     ;rsi will point at newline character at the end of str1
dec rsi                 ;dec rsi to last character of str1
add rdi,5               ;rdi is pointing at 5th position in str2

mov rcx,qword[temp]     ;length of str1 is stored in rcx reg
std                     ;set direction instruction
rep movsb               ;repeat movsb- instruction will repeat till the value stored in rcx and each time one byte is moved
 
write str1,20           ;write the transferred string 
jmp mainmenu

overlapstr2: write display2,display2len
write msg,msglen        ;write the msg
read str1,11            ;read the string from user


dec rax                 ;the length stored in rax is decremented by 1
mov qword[str1len],rax  ;mov value of rax to variable str1len of qword type
mov qword[temp],rax     ;mov value of rax to variable temp of qword type

mov rsi,str1            ;rsi will point to the address of str1[base address]
mov rdi,str2            ;rdi will point to the address of str2[base address]
dec rdi                 ;rdi will point to enter character

add rsi,qword[temp]     ;rsi will point at newline character at the end of str1
dec rsi                 ;dec rsi to last character of str1
add rdi,5               ;rdi is pointing at 5th position in str2


up2: mov bl,byte[rsi]    ;using bl reg temporary to mov value at the address pointed by rsi to the rdi
mov byte[rdi],bl        ;value in bl will be stored in at the address pointed by rdi
dec rsi                 ;dec rsi to next bite
dec rdi                 ;dec rdi to next bite
dec qword[temp]         ;dec length of str1 
jnz up2                 ;JUMPif NOT ZERO to label up

write str1,20           ;write the transferred string 

jmp mainmenu

nonoverlapstr3: write display3,display3len
write msg,msglen        ;write the msg
read str1,11            ;read the string from user

dec rax                 ;the length stored in rax is decremented by 1
mov qword[str1len],rax  ;mov value of rax to variable str1len of qword type
mov qword[temp],rax     ;mov value of rax to variable temp of qword type

mov rsi,str1            ;rsi will point to the address of str1[base address]
mov rdi,str2            ;rdi will point to the address of str2[base address]
dec rdi                 ;rdi will point to enter character

mov rcx,qword[temp]     ;length of str1 is stored in rcx reg
cld
rep movsb               ;repeat movsb- instruction will repeat till the value stored in rcx and each time one byte is moved
 
write str1,20           ;write the transferred string 
jmp mainmenu

nonoverlapstr4: write display4,display4len
write msg,msglen        ;write the msg
read str1,10            ;read the string from user


dec rax                 ;the length stored in rax is decremented by 1
mov qword[str1len],rax  ;mov value of rax to variable str1len of qword type
mov qword[temp],rax     ;mov value of rax to variable temp of qword type

mov rsi,str1            ;rsi will point to the address of str1[base address]
mov rdi,str2            ;rdi will point to the address of str2[base address]
dec rdi                 ;rdi will point to enter character

up: mov bl,byte[rsi]    ;using bl reg temporary to mov value at the address pointed by rsi to the rdi
mov byte[rdi],bl        ;value in bl will be stored in at the address pointed by rdi
inc rsi                 ;inc rsi to next bite
inc rdi                 ;inc rdi to next bite
dec qword[temp]         ;dec length of str1 
jnz up                  ;JUMPif NOT ZERO to label up

write str1,20           ;write the transferred string         
jmp mainmenu            ;JUMP to main menu label

exit:mov rax,60         ;exit label
mov rdi,0
syscall
