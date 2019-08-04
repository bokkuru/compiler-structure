	.section __TEXT,__text,regular,pure_instructions
	.globl  _mrn
	.p2align 4, 0x90
_mrn:
	pushq   %rbp
	movq    %rsp, %rbp
	subq    $0, %rsp
	pushq   %rdi
	pushq   $0
	popq   %r10
	popq   %rax
	cmpq   %r10,%rax
	setl   %al
	movzbq   %al,%rax
	pushq   %rax
	popq   %rax
	cmpq   $0,%rax
	jne   CTRL1
	pushq   %rdi
	pushq   $0
	popq   %r10
	popq   %rax
	cmpq   %r10,%rax
	sete   %al
	movzbq   %al,%rax
	pushq   %rax
	popq   %rax
	cmpq   $0,%rax
	jne   CTRL1
	jmp   CTRL2
CTRL1:
	pushq   $1
	jmp   CTRL3
CTRL2:
	pushq   $0
CTRL3:
	popq   %rax
	cmpq   $0,%rax
	je     CTRL4
	pushq   $0
	popq   %rax
	jmp     CTRL0
	jmp     CTRL5
CTRL4:
	pushq   $10
# save caller-save registers
	pushq   %rdi
	pushq   %rsi
	pushq   %rdx
	pushq   %rcx
	pushq   %r8
	pushq   %r9
	pushq   %rdi
	pushq   $1
	popq   %r10
	popq   %rax
	subq   %r10,%rax
	pushq   %rax
	leaq    _mrn(%rip), %rax
	pushq   %rax
	popq    %rax
	popq    %rdi
	call    *%rax
# restore caller-save registers
	popq   %r9
	popq   %r8
	popq   %rcx
	popq   %rdx
	popq   %rsi
	popq   %rdi
	pushq   %rax
	popq   %r10
	popq   %rax
	imulq   %r10,%rax
	pushq   %rax
	pushq   %rdi
	popq   %r10
	popq   %rax
	addq   %r10,%rax
	pushq   %rax
	popq   %rax
	jmp     CTRL0
CTRL5:
L.XCC.RE.mrn:
	movq    %rbp, %rsp
CTRL0:
	popq    %rbp
	retq
	.section __TEXT,__cstring,cstring_literals
L.XCC.STR0:
	.ascii  "mrn(%ld) = %ld\n\0"
	.section __TEXT,__text,regular,pure_instructions
	.globl  _main
	.p2align 4, 0x90
_main:
	pushq   %rbp
	movq    %rsp, %rbp
	subq    $16, %rsp
	pushq   $0
	leaq    -8(%rbp), %rax 	# i, 0
	pushq   %rax
	popq   %rax
	popq   %r10
	movq   %r10, 0(%rax)
	pushq   %r10
	addq    $8, %rsp
CTRL7:
	movq    -8(%rbp), %rax 	# i, 0
	pushq   %rax
	pushq   $11
	popq   %r10
	popq   %rax
	cmpq   %r10,%rax
	setl   %al
	movzbq   %al,%rax
	pushq   %rax
	popq   %rax
	cmpq   $0,%rax
	je     CTRL8
# save caller-save registers
	pushq   %rdi
	pushq   %rsi
	pushq   %rdx
	pushq   %rcx
	pushq   %r8
	pushq   %r9
# save caller-save registers
	pushq   %rdi
	pushq   %rsi
	pushq   %rdx
	pushq   %rcx
	pushq   %r8
	pushq   %r9
	movq    -8(%rbp), %rax 	# i, 0
	pushq   %rax
	leaq    _mrn(%rip), %rax
	pushq   %rax
	popq    %rax
	popq    %rdi
	call    *%rax
# restore caller-save registers
	popq   %r9
	popq   %r8
	popq   %rcx
	popq   %rdx
	popq   %rsi
	popq   %rdi
	pushq   %rax
	movq    -8(%rbp), %rax 	# i, 0
	pushq   %rax
	leaq    L.XCC.STR0(%rip), %rax 	# "mrn(%ld) = %ld\n"
	pushq   %rax
	movq    _printf@GOTPCREL(%rip), %rax
	pushq   %rax
	popq    %rax
	popq    %rdi
	popq    %rsi
	popq    %rdx
	call    *%rax
# restore caller-save registers
	popq   %r9
	popq   %r8
	popq   %rcx
	popq   %rdx
	popq   %rsi
	popq   %rdi
	pushq   %rax
	addq    $8, %rsp
	movq    -8(%rbp), %rax 	# i, 0
	pushq   %rax
	pushq   $1
	popq   %r10
	popq   %rax
	addq   %r10,%rax
	pushq   %rax
	leaq    -8(%rbp), %rax 	# i, 0
	pushq   %rax
	popq   %rax
	popq   %r10
	movq   %r10, 0(%rax)
	pushq   %r10
	addq    $8, %rsp
	jmp     CTRL7
CTRL8:
L.XCC.RE.main:
	movq    %rbp, %rsp
CTRL6:
	popq    %rbp
	retq
