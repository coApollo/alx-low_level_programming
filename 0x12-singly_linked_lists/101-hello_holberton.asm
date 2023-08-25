section .data
    hello db "Hello, Holberton", 0
    format db "%s", 0
    newline db 10, 0

section .text
    extern printf

global main
main:
    ; Push the format string and hello string onto the stack
    push format
    push hello

    ; Call printf
    mov rdi, format
    mov rsi, hello
    xor rax, rax
    call printf

    ; Push the newline string onto the stack
    push newline

    ; Call printf to print the newline
    mov rdi, format
    mov rsi, rsp
    xor rax, rax
    call printf

    ; Clean up the stack
    add rsp, 16

    ; Exit the program
    xor eax, eax
    ret

