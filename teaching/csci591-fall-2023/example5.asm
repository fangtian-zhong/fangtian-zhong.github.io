bits 64
default rel

section .data
    neg_number dw -12345
    message db "The constant value is: ", 0xd, 0xa, 0; byte
    format db "%hd", 0xd, 0xa, 0; printing format for numbers
    real_number1 dd 1.234            ; floating-point constant 
    real_format db "%f", 0
      
section .text
    extern printf
    global main
    extern ExitProcess
    extern _CRT_INIT
main:
    push    rbp
    mov     rbp, rsp
    sub     rsp, 32
    call    _CRT_INIT
    
    ;Print the string
    lea rcx, [message]
    call printf    

    ; Print the constant value
    mov rcx, format
    mov edx, dword [neg_number]
    call printf
    
    ;Print the word chars
    mov rcx, real_format
    movss xmm0, dword [real_number1]
    xor r8, r8
    xor r9, r9
    call printf

    ; Exit the program
    xor rax, rax
    call ExitProcess