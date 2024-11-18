bits 64
default rel


section .data
    real_number1 dd 1.234
    format db 'result is: %f', 0xa, 0

section .text
global main
extern _CRT_INIT
extern ExitProcess
extern printf

main:
    call _CRT_INIT                 ; Needed since our entry point is not _DllMainCRTStartup. See https://msdn.microsoft.com/en-us/library/708by912.aspx

    push    rbp
    mov    rbp, rsp
    sub    rsp, 32

    movss    xmm0, [real_number1]             ; Load a
 

    ; Remember, %f actually expects a double, so we need to convert the float to double
    cvtss2sd    xmm0, xmm0

    ; Also remember: floats are passed in xmm registers, but printf wants a
    ; double! This is an aggregate so it's passed in RDX instead.
    lea    rcx, [format]
    movq    rdx, xmm0
    call    printf

    ; Exit the program
    xor rax, rax
    call ExitProcess