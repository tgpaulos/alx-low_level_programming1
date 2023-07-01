section .data
    hello db "Hello, Holberton", 10  ; 10 represents the newline character
    format db "%s", 0

section .text
    extern printf

global main
main:
    sub rsp, 8      ; align the stack

    mov rdi, format ; address of the format string
    mov rsi, hello  ; address of the hello string
    xor eax, eax    ; clear EAX register
    call printf     ; call printf function

    add rsp, 8      ; restore the stack
    xor eax, eax    ; clear EAX register
    ret             ; return from the program
