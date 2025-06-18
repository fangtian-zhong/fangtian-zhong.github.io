	.file	"strcat.c"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movabsq	$139291291466, %rax
	movq	%rax, -15(%rbp)
	movl	$0, -7(%rbp)
	movw	$0, -3(%rbp)
	movb	$0, -1(%rbp)
	movabsq	$7596558226555101514, %rax
	movq	%rax, -30(%rbp)
	movl	$2123118, -22(%rbp)
	movw	$0, -18(%rbp)
	movb	$0, -16(%rbp)
	movabsq	$34168858989192523, %rax
	movq	%rax, -45(%rbp)
	movl	$0, -37(%rbp)
	movw	$0, -33(%rbp)
	movb	$0, -31(%rbp)
	leaq	-45(%rbp), %rdx
	leaq	-15(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	strcat
	leaq	-45(%rbp), %rdx
	leaq	-30(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	strcat
	leaq	-15(%rbp), %rax
	movq	%rax, %rdi
	call	puts
	leaq	-30(%rbp), %rax
	movq	%rax, %rdi
	call	puts
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (GNU) 11.4.1 20231218 (Red Hat 11.4.1-3)"
	.section	.note.GNU-stack,"",@progbits
