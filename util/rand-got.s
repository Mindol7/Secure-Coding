BITS 64

SECTION .text
global main
 
main:
  push rax                 ; save all clobbered registers
  push rcx                 ; (rcx and r11 destroyed by kernel)
  push rdx
  push rsi
  push rdi
  push r11

  pop r11
  pop rdi
  pop rsi
  pop rdx
  pop rcx
  pop rax

  mov rax, 0

  ret                      ; return


