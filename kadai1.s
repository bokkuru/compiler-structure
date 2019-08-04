	.globl  _i
	.section __DATA,__data
	.p2align  2
_i:
	.skip   4

	.globl  _sum
	.section __DATA,__data
	.p2align  2
_sum:
	.skip   4

	.section __TEXT,__cstring,cstring_literals
L.XCC.STR1:
	.ascii  "sum = %d\n\0"
L.XCC.STR0:
	.ascii  "i = %d\n\0"
	.section __TEXT,__text,regular,pure_instructions
	.globl  _main
	.p2align 4, 0x90
_main:
	pushq   %rbp
	movq    %rsp, %rbp
	subq    $0, %rsp
	pushq   $5
	leaq   _i(%rip),%rax
	pushq   %rax
	popq   %rax
	popq   %r10
	movl   %r10d, 0(%rax)
	pushq   %r10
	addq    $8, %rsp
	pushq   $0
	leaq   _sum(%rip),%rax
	pushq   %rax
	popq   %rax
	popq   %r10
	movl   %r10d, 0(%rax)
	pushq   %r10
	addq    $8, %rsp
CTRL1:
	pushq   $0
	movslq   _i(%rip),%rax
	pushq   %rax
	popq   %r10
	popq   %rax
	cmpq   %r10,%rax
	setl   %al
	movzbq   %al,%rax
	pushq   %rax
	popq   %rax
	cmpq   $0,%rax
	je     CTRL2
# save caller-save registers
	pushq   %rdi
	pushq   %rsi
	pushq   %rdx
	pushq   %rcx
	pushq   %r8
	pushq   %r9
	movslq   _i(%rip),%rax
	pushq   %rax
	leaq    L.XCC.STR0(%rip), %rax 	# "i = %d\n"
	pushq   %rax
	movq    _printf@GOTPCREL(%rip), %rax
	pushq   %rax
	popq    %rax
	popq    %rdi
	popq    %rsi
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
	movslq   _sum(%rip),%rax
	pushq   %rax
	movslq   _i(%rip),%rax
	pushq   %rax
	popq   %r10
	popq   %rax
	addq   %r10,%rax
	pushq   %rax
	leaq   _sum(%rip),%rax
	pushq   %rax
	popq   %rax
	popq   %r10
	movl   %r10d, 0(%rax)
	pushq   %r10
	addq    $8, %rsp
	movslq   _i(%rip),%rax
	pushq   %rax
	pushq   $1
	popq   %r10
	popq   %rax
	subq   %r10,%rax
	pushq   %rax
	leaq   _i(%rip),%rax
	pushq   %rax
	popq   %rax
	popq   %r10
	movl   %r10d, 0(%rax)
	pushq   %r10
	addq    $8, %rsp
	jmp     CTRL1
CTRL2:
# save caller-save registers
	pushq   %rdi
	pushq   %rsi
	pushq   %rdx
	pushq   %rcx
	pushq   %r8
	pushq   %r9
	movslq   _sum(%rip),%rax
	pushq   %rax
	leaq    L.XCC.STR1(%rip), %rax 	# "sum = %d\n"
	pushq   %rax
	movq    _printf@GOTPCREL(%rip), %rax
	pushq   %rax
	popq    %rax
	popq    %rdi
	popq    %rsi
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
L.XCC.RE.main:
	movq    %rbp, %rsp
CTRL0:
	popq    %rbp
	retq
