section .data
    hello db "Hello, Holberton",0   ; Null-terminated string to be printed

section .text
    global main
    extern printf

main:
    ; Call printf to print the string
    mov rdi, hello              ; Load address of the string into rdi
    call printf                ; Call the printf function

    ; Exit the program
    mov rax, 60                 ; syscall number for exit (64-bit)
    xor rdi, rdi                ; Exit status: 0
    syscall

