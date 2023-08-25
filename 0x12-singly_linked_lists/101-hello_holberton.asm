section .rodata
    msg: db "Hello, Holberton", 10
    msglen: equ $ - msg

section .text
    global main

main:
    mov rax, 1      ; Set the system call number for write
    mov rdi, 1      ; Set the file descriptor for stdout
    mov rsi, msg    ; Set the address of the message string
    mov rdx, msglen ; Set the length of the message string
    syscall         ; Call the write system call

    mov rax, 60     ; Set the system call number for exit
    mov rdi, 0      ; Set the exit status
    syscall         ; Call the exit system call

