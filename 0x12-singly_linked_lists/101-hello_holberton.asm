section .data
    format db `Hello, Holberton\n`, 0   ; The string to be printed

section .text
    global main                 ; Entry point of the program

main:
    mov edi, format             ; Load the address of the format string into edi
    xor eax, eax                ; Clear the eax register (eax = 0)
    call printf                 ; Call the printf function
    mov eax, 0                  ; Set the return value to 0
    ret                         ; Return from the main function

extern printf                  ; Declare the printf function from the C library
