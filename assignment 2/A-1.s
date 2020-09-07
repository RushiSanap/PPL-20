	.file	"A-1.c"
	.text
	.comm	Z,4,4
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$6, -28(%rbp)
	movl	$10, -24(%rbp)
	movl	$20, -20(%rbp)
	movl	-24(%rbp), %eax
	imull	-20(%rbp), %eax
	addl	$25, %eax
	movl	%eax, -16(%rbp)
	movl	$6, -28(%rbp)
	movl	Z(%rip), %eax
	movl	%eax, -12(%rbp)
	movsd	.LC0(%rip), %xmm0
	movsd	%xmm0, -8(%rbp)
	movsd	-8(%rbp), %xmm0
	cvttsd2sil	%xmm0, %eax
	movl	%eax, Z(%rip)
	movl	Z(%rip), %eax
	addl	$1, %eax
	movl	%eax, Z(%rip)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
	.align 8
.LC0:
	.long	0
	.long	1078018048
	.ident	"GCC: (Ubuntu 9.3.0-10ubuntu2) 9.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
