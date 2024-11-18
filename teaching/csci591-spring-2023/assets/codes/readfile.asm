; This program creates a file, writes to it, then reads from it and prints the result
; to the console.
%include "win32n.inc"

default rel
bits 64

segment .data
    default_filename db 'readfile.txt', 0
    default_text db 'This is test text to write to a file.', 0xd, 0xa, 0
    default_text_length equ $-default_text-1
    error_msg db 'An error occurred: %d', 0xd, 0xa, 0 ; CRLF and then null-terminate
    final_printout db 'text read: %s', 0xd, 0xa, 0

segment .bss
    fHandle 	resq 1
    lpNumberOfBytesWritten 	resq 1
    readbuffer 			resb 64
    lpNumberOfBytesRead 	resq 1
    lpBuffer                  resq 64
segment .text

; Kernel32.lib
extern _CRT_INIT

extern CloseHandle
extern CreateFileA
extern ExitProcess
extern GetLastError
extern GetProcessHeap
extern HeapAlloc
extern HeapFree
extern ReadFile
extern WriteFile

extern printf

global main

main:

    push    rbp
    mov    rbp, rsp
    

    call    _CRT_INIT                 ; Needed since our entry point is not _DllMainCRTStartup. See https://msdn.microsoft.com/en-us/library/708by912.aspx

    ; Additional arguments pushed onto stack
    xor    eax, eax
    push rax
    push FILE_ATTRIBUTE_NORMAL
    push CREATE_ALWAYS

    ; First 4 arguments go in registers, rest are pushed onto the stack
    xor    r9, r9
    mov    r8d, FILE_SHARE_READ
    mov    rdx, GENERIC_WRITE|GENERIC_READ
    lea    rcx, [default_filename]
   
    sub rsp, 32
    call    CreateFileA
    add rsp, 32

    cmp    rax, INVALID_HANDLE_VALUE
    je    .error_creating_file
    

    mov 	[fHandle],rax ; save handle for closing file

    

    mov    rcx, [fHandle] ; File handle is first argument to WriteFile
    lea    rdx, [default_text]
    mov    r8, default_text_length
    mov    r9, [lpNumberOfBytesWritten]
    xor    rax, rax
    push   rax
    sub    rsp, 32
    call   WriteFile
    add    rsp, 32
    cmp    rax, 0
    je    .error_writing_to_file    
    

    mov    rcx,[fHandle]				;handle
    lea    rdx, [readbuffer]
    mov    r8, lpNumberOfBytesWritten
    mov    r9, [lpNumberOfBytesRead]
    push NULL
    sub rsp, 32
    call ReadFile
    add rsp, 32
    cmp    rax, 0
    je    .error_reading_file
    

    mov    rcx, [fHandle]
    sub rsp, 32
    call    CloseHandle
    add rsp, 32
    cmp    rax, 0
    je    .error_closing_file
    


    ; Additional arguments pushed onto stack
    xor    eax, eax
    push rax
    push FILE_ATTRIBUTE_NORMAL
    push CREATE_ALWAYS
    
    ; First 4 arguments go in registers, rest are pushed onto the stack
    xor    r9, r9
    mov    r8d, FILE_SHARE_READ
    mov    rdx, GENERIC_WRITE|GENERIC_READ
    lea    rcx, [default_filename]
   
    sub rsp, 32
    call    CreateFileA
    add rsp, 32

    cmp    rax, INVALID_HANDLE_VALUE
    je    .error_creating_file

    ;return heap handle
    mov    [fHandle], rax
  
    call    GetProcessHeap
    cmp    rax, 0
    je    .error_getting_heap
    
    ;allocate heap space
    xor    r8, r8
    mov    r8, lpNumberOfBytesWritten
    mov    rdx, qword HEAP_ZERO_MEMORY
    mov    rcx, rax
    sub    rsp, 32
    call   HeapAlloc
    add    rsp, 32

    cmp    rax, 0
    je    .error_allocating_memory
    

    mov    [lpBuffer], rax; Store pointer to allocated memory block from HeapAlloc
    
    mov    rcx,[fHandle]
    lea    rdx, [lpBuffer]
    mov    r8, lpNumberOfBytesWritten
    mov    r9, [lpNumberOfBytesRead]
    push NULL
    sub rsp, 32
    call    ReadFile
    add rsp, 32
    cmp    rax, 0
    je    .error_reading_file


    mov    rcx, [fHandle]
    call    CloseHandle


    jmp .quit_program



.error_creating_file:
    mov    eax, 1               ; Oh no, we failed.
    lea rcx, error_msg
    mov rdx, INVALID_HANDLE_VALUE
    call printf
    jmp    .quit_program
.error_writing_to_file:
    mov    eax, 2               ; No, a failure.
    jmp    .quit_program
.error_reading_file:
    jmp    .print_last_error_code

.error_closing_file:
    jmp    .print_last_error_code

.error_getting_heap:
    mov    eax, 3
    jmp    .quit_program

.error_allocating_memory:
    mov    eax, 4
    jmp    .print_last_error_code

.print_last_error_code:
    call    GetLastError

    lea    rcx, [error_msg]
    mov    rdx, rax
    call   printf

    mov    eax, 3
    jmp    .quit_program

.quit_program:
    call    ExitProcess
