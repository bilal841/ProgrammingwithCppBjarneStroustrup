	.file	"hotel.cpp"
.lcomm _ZStL8__ioinit,1,1
	.globl	rooms
	.bss
	.align 32
rooms:
	.space 27600
	.globl	count
	.align 4
count:
	.space 4
	.section .rdata,"dr"
.LC0:
	.ascii "\12Type AC/Non-AC (A/N) : \0"
.LC1:
	.ascii "\12Type Comfort (S/N) : \0"
.LC2:
	.ascii "\12Type Size (B/S) : \0"
.LC3:
	.ascii "\12Daily Rent : \0"
.LC4:
	.ascii "\12 Room Added Successfully!\0"
	.text
	.align 2
	.globl	_ZN4Room7addRoomEi
	.def	_ZN4Room7addRoomEi;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN4Room7addRoomEi
_ZN4Room7addRoomEi:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_setframe	%rbp, 32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movl	%r8d, 32(%rbp)
	movq	16(%rbp), %rax
	movl	32(%rbp), %edx
	movl	%edx, 4(%rax)
	leaq	.LC0(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	16(%rbp), %rax
	addq	$2, %rax
	movq	%rax, %rdx
	leaq	_ZSt3cin(%rip), %rcx
	call	_ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_RS3_
	leaq	.LC1(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	16(%rbp), %rdx
	leaq	_ZSt3cin(%rip), %rcx
	call	_ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_RS3_
	leaq	.LC2(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	16(%rbp), %rax
	addq	$1, %rax
	movq	%rax, %rdx
	leaq	_ZSt3cin(%rip), %rcx
	call	_ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_RS3_
	leaq	.LC3(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	16(%rbp), %rax
	addq	$8, %rax
	movq	%rax, %rdx
	leaq	_ZSt3cin(%rip), %rcx
	call	_ZNSirsERi
	movq	16(%rbp), %rax
	movl	$0, 12(%rax)
	leaq	.LC4(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	call	getch
	nop
	movq	16(%rbp), %rax
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC5:
	.ascii "Room Details\12\0"
.LC6:
	.ascii "\12Room is Reserved\0"
.LC7:
	.ascii "\12Room is available\0"
.LC8:
	.ascii "\12Room not found\0"
	.text
	.align 2
	.globl	_ZN4Room10searchRoomEi
	.def	_ZN4Room10searchRoomEi;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN4Room10searchRoomEi
_ZN4Room10searchRoomEi:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rdi
	.seh_pushreg	%rdi
	pushq	%rsi
	.seh_pushreg	%rsi
	subq	$336, %rsp
	.seh_stackalloc	336
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, 240(%rbp)
	movl	%edx, 248(%rbp)
	movl	$0, 200(%rbp)
	movl	$0, 204(%rbp)
	jmp	.L4
.L7:
	movl	204(%rbp), %eax
	cltq
	imulq	$276, %rax, %rdx
	leaq	rooms(%rip), %rax
	movl	4(%rdx,%rax), %eax
	cmpl	248(%rbp), %eax
	jne	.L5
	movl	$1, 200(%rbp)
	jmp	.L6
.L5:
	addl	$1, 204(%rbp)
.L4:
	movl	count(%rip), %eax
	cmpl	%eax, 204(%rbp)
	setl	%al
	testb	%al, %al
	jne	.L7
.L6:
	cmpl	$1, 200(%rbp)
	jne	.L8
	leaq	.LC5(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	204(%rbp), %eax
	cltq
	imulq	$276, %rax, %rdx
	leaq	rooms(%rip), %rax
	movl	12(%rdx,%rax), %eax
	cmpl	$1, %eax
	jne	.L9
	leaq	.LC6(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	jmp	.L10
.L9:
	leaq	.LC7(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
.L10:
	movl	204(%rbp), %eax
	cltq
	imulq	$276, %rax, %rcx
	leaq	rooms(%rip), %rdx
	leaq	-96(%rbp), %rax
	addq	%rcx, %rdx
	movl	$34, %ecx
	movq	%rax, %rdi
	movq	%rdx, %rsi
	rep movsq
	movq	%rsi, %rdx
	movq	%rdi, %rax
	movl	(%rdx), %ecx
	movl	%ecx, (%rax)
	addq	$4, %rax
	addq	$4, %rdx
	leaq	-96(%rbp), %rax
	movq	%rax, %rdx
	movq	240(%rbp), %rcx
	call	_ZN4Room11displayRoomES_
	call	getch
	jmp	.L3
.L8:
	leaq	.LC8(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	call	getch
	nop
.L3:
	addq	$336, %rsp
	popq	%rsi
	popq	%rdi
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC9:
	.ascii "\12Room Number: \11\0"
.LC10:
	.ascii "\12Type AC/Non-AC (A/N) \0"
.LC11:
	.ascii "\12Type Comfort (S/N) \0"
.LC12:
	.ascii "\12Type Size (B/S) \0"
.LC13:
	.ascii "\12Rent: \0"
	.text
	.align 2
	.globl	_ZN4Room11displayRoomES_
	.def	_ZN4Room11displayRoomES_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN4Room11displayRoomES_
_ZN4Room11displayRoomES_:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	pushq	%rsi
	.seh_pushreg	%rsi
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_setframe	%rbp, 48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, %rbx
	movl	4(%rbx), %esi
	leaq	.LC9(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	%esi, %edx
	movq	%rax, %rcx
	call	_ZNSolsEi
	movzbl	2(%rbx), %eax
	movsbl	%al, %esi
	leaq	.LC10(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	%esi, %edx
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
	movzbl	(%rbx), %eax
	movsbl	%al, %esi
	leaq	.LC11(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	%esi, %edx
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
	movzbl	1(%rbx), %eax
	movsbl	%al, %esi
	leaq	.LC12(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	%esi, %edx
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
	movl	8(%rbx), %ebx
	leaq	.LC13(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	%ebx, %edx
	movq	%rax, %rcx
	call	_ZNSolsEi
	nop
	addq	$32, %rsp
	popq	%rbx
	popq	%rsi
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC14:
	.ascii "\12 No Guest in Hotel !!\0"
.LC15:
	.ascii "\12 Customer First Name : \0"
.LC16:
	.ascii "\12 Room Number : \0"
.LC17:
	.ascii "\12 Address (only city) : \0"
.LC18:
	.ascii "\12 Phone : \0"
	.align 8
.LC19:
	.ascii "\12---------------------------------------\0"
	.text
	.align 2
	.globl	_ZN9HotelMgnt18guestSummaryReportEv
	.def	_ZN9HotelMgnt18guestSummaryReportEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9HotelMgnt18guestSummaryReportEv
_ZN9HotelMgnt18guestSummaryReportEv:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$56, %rsp
	.seh_stackalloc	56
	.seh_setframe	%rbp, 64
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movl	count(%rip), %eax
	testl	%eax, %eax
	jne	.L14
	leaq	.LC14(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
.L14:
	movl	$0, -20(%rbp)
	jmp	.L15
.L17:
	movl	-20(%rbp), %eax
	cltq
	imulq	$276, %rax, %rdx
	leaq	rooms(%rip), %rax
	movl	12(%rdx,%rax), %eax
	cmpl	$1, %eax
	jne	.L16
	movl	-20(%rbp), %eax
	cltq
	imulq	$276, %rax, %rax
	leaq	16(%rax), %rdx
	leaq	rooms(%rip), %rax
	leaq	(%rdx,%rax), %rbx
	leaq	.LC15(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rbx, %rdx
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	-20(%rbp), %eax
	cltq
	imulq	$276, %rax, %rdx
	leaq	rooms(%rip), %rax
	movl	4(%rdx,%rax), %ebx
	leaq	.LC16(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	%ebx, %edx
	movq	%rax, %rcx
	call	_ZNSolsEi
	movl	-20(%rbp), %eax
	cltq
	imulq	$276, %rax, %rax
	leaq	112(%rax), %rdx
	leaq	rooms(%rip), %rax
	addq	%rdx, %rax
	leaq	4(%rax), %rbx
	leaq	.LC17(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rbx, %rdx
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	-20(%rbp), %eax
	cltq
	imulq	$276, %rax, %rax
	leaq	208(%rax), %rdx
	leaq	rooms(%rip), %rax
	addq	%rdx, %rax
	leaq	8(%rax), %rbx
	leaq	.LC18(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rbx, %rdx
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	.LC19(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
.L16:
	addl	$1, -20(%rbp)
.L15:
	movl	count(%rip), %eax
	cmpl	%eax, -20(%rbp)
	setl	%al
	testb	%al, %al
	jne	.L17
	call	getch
	nop
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC20:
	.ascii "\12Enter Room number : \0"
.LC21:
	.ascii "\12Room is already Booked\0"
.LC22:
	.ascii "\12Enter booking id: \0"
	.align 8
.LC23:
	.ascii "\12Enter Customer Name (First Name): \0"
.LC24:
	.ascii "\12Enter Address (only city): \0"
.LC25:
	.ascii "\12Enter Phone: \0"
.LC26:
	.ascii "\12Enter From Date: \0"
.LC27:
	.ascii "\12Enter to  Date: \0"
.LC28:
	.ascii "\12Enter Advance Payment: \0"
	.align 8
.LC29:
	.ascii "\12 Customer Checked-in Successfully..\0"
	.def	__gxx_personality_sj0;	.scl	2;	.type	32;	.endef
	.def	_Unwind_SjLj_Register;	.scl	2;	.type	32;	.endef
	.def	_Unwind_SjLj_Unregister;	.scl	2;	.type	32;	.endef
	.text
	.align 2
	.globl	_ZN9HotelMgnt7checkInEv
	.def	_ZN9HotelMgnt7checkInEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9HotelMgnt7checkInEv
_ZN9HotelMgnt7checkInEv:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%r15
	.seh_pushreg	%r15
	pushq	%r14
	.seh_pushreg	%r14
	pushq	%r13
	.seh_pushreg	%r13
	pushq	%r12
	.seh_pushreg	%r12
	pushq	%rdi
	.seh_pushreg	%rdi
	pushq	%rsi
	.seh_pushreg	%rsi
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$600, %rsp
	.seh_stackalloc	600
	leaq	128(%rsp), %rbp
	movaps	%xmm6, 304(%rbp)
	.seh_savexmm	%xmm6, 432
	movaps	%xmm7, 320(%rbp)
	.seh_savexmm	%xmm7, 448
	movaps	%xmm8, 336(%rbp)
	.seh_savexmm	%xmm8, 464
	movaps	%xmm9, 352(%rbp)
	.seh_savexmm	%xmm9, 480
	movaps	%xmm10, 368(%rbp)
	.seh_savexmm	%xmm10, 496
	movaps	%xmm11, 384(%rbp)
	.seh_savexmm	%xmm11, 512
	movaps	%xmm12, 400(%rbp)
	.seh_savexmm	%xmm12, 528
	movaps	%xmm13, 416(%rbp)
	.seh_savexmm	%xmm13, 544
	movaps	%xmm14, 432(%rbp)
	.seh_savexmm	%xmm14, 560
	movaps	%xmm15, 448(%rbp)
	.seh_savexmm	%xmm15, 576
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, 544(%rbp)
	leaq	__gxx_personality_sj0(%rip), %rax
	movq	%rax, -48(%rbp)
	leaq	.LLSDA993(%rip), %rax
	movq	%rax, -40(%rbp)
	leaq	-32(%rbp), %rax
	leaq	304(%rbp), %rdx
	movq	%rdx, (%rax)
	leaq	.L28(%rip), %rdx
	movq	%rdx, 8(%rax)
	movq	%rsp, 16(%rax)
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_Unwind_SjLj_Register
	movl	$0, 296(%rbp)
	movl	$1, -88(%rbp)
	leaq	.LC20(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	292(%rbp), %rax
	movq	%rax, %rdx
	leaq	_ZSt3cin(%rip), %rcx
	call	_ZNSirsERi
	movl	$0, 300(%rbp)
	jmp	.L19
.L22:
	movl	300(%rbp), %eax
	cltq
	imulq	$276, %rax, %rdx
	leaq	rooms(%rip), %rax
	movl	4(%rdx,%rax), %edx
	movl	292(%rbp), %eax
	cmpl	%eax, %edx
	jne	.L20
	movl	$1, 296(%rbp)
	jmp	.L21
.L20:
	addl	$1, 300(%rbp)
.L19:
	movl	count(%rip), %eax
	cmpl	%eax, 300(%rbp)
	setl	%al
	testb	%al, %al
	jne	.L22
.L21:
	cmpl	$1, 296(%rbp)
	jne	.L30
	movl	300(%rbp), %eax
	cltq
	imulq	$276, %rax, %rdx
	leaq	rooms(%rip), %rax
	movl	12(%rdx,%rax), %eax
	cmpl	$1, %eax
	jne	.L24
	movl	$1, -88(%rbp)
	leaq	.LC21(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	call	getch
	jmp	.L30
.L24:
	movl	$1, -88(%rbp)
	leaq	.LC22(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	300(%rbp), %eax
	cltq
	imulq	$276, %rax, %rax
	leaq	272(%rax), %rdx
	leaq	rooms(%rip), %rax
	addq	%rdx, %rax
	movq	%rax, %rdx
	leaq	_ZSt3cin(%rip), %rcx
	call	_ZNSirsERi
	leaq	.LC23(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	300(%rbp), %eax
	cltq
	imulq	$276, %rax, %rax
	leaq	16(%rax), %rdx
	leaq	rooms(%rip), %rax
	addq	%rdx, %rax
	movq	%rax, %rdx
	leaq	_ZSt3cin(%rip), %rcx
	call	_ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_PS3_
	leaq	.LC24(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	300(%rbp), %eax
	cltq
	imulq	$276, %rax, %rax
	leaq	112(%rax), %rdx
	leaq	rooms(%rip), %rax
	addq	%rdx, %rax
	addq	$4, %rax
	movq	%rax, %rdx
	leaq	_ZSt3cin(%rip), %rcx
	call	_ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_PS3_
	leaq	.LC25(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	300(%rbp), %eax
	cltq
	imulq	$276, %rax, %rax
	leaq	208(%rax), %rdx
	leaq	rooms(%rip), %rax
	addq	%rdx, %rax
	addq	$8, %rax
	movq	%rax, %rdx
	leaq	_ZSt3cin(%rip), %rcx
	call	_ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_PS3_
	leaq	.LC26(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	300(%rbp), %eax
	cltq
	imulq	$276, %rax, %rax
	leaq	224(%rax), %rdx
	leaq	rooms(%rip), %rax
	addq	%rdx, %rax
	addq	$4, %rax
	movq	%rax, %rdx
	leaq	_ZSt3cin(%rip), %rcx
	call	_ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_PS3_
	leaq	.LC27(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	300(%rbp), %eax
	cltq
	imulq	$276, %rax, %rax
	leaq	240(%rax), %rdx
	leaq	rooms(%rip), %rax
	addq	%rdx, %rax
	addq	$8, %rax
	movq	%rax, %rdx
	leaq	_ZSt3cin(%rip), %rcx
	call	_ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_PS3_
	leaq	.LC28(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	300(%rbp), %eax
	cltq
	imulq	$276, %rax, %rax
	leaq	256(%rax), %rdx
	leaq	rooms(%rip), %rax
	addq	%rdx, %rax
	addq	$12, %rax
	movq	%rax, %rdx
	leaq	_ZSt3cin(%rip), %rcx
	call	_ZNSirsERf
	movl	300(%rbp), %eax
	cltq
	imulq	$276, %rax, %rdx
	leaq	rooms(%rip), %rax
	movl	$1, 12(%rdx,%rax)
	leaq	.LC29(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	call	getch
	jmp	.L30
.L28:
	leaq	-304(%rbp), %rbp
	movq	-80(%rbp), %rax
	movl	$-1, -88(%rbp)
	movq	%rax, %rcx
	call	_Unwind_SjLj_Resume
.L30:
	nop
.L18:
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_Unwind_SjLj_Unregister
	nop
	movaps	304(%rbp), %xmm6
	movaps	320(%rbp), %xmm7
	movaps	336(%rbp), %xmm8
	movaps	352(%rbp), %xmm9
	movaps	368(%rbp), %xmm10
	movaps	384(%rbp), %xmm11
	movaps	400(%rbp), %xmm12
	movaps	416(%rbp), %xmm13
	movaps	432(%rbp), %xmm14
	movaps	448(%rbp), %xmm15
	addq	$600, %rsp
	popq	%rbx
	popq	%rsi
	popq	%rdi
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	popq	%rbp
	ret
	.section	.gcc_except_table,"w"
.LLSDA993:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE993-.LLSDACSB993
.LLSDACSB993:
	.uleb128 0
	.uleb128 0
.LLSDACSE993:
	.text
	.seh_endproc
	.section .rdata,"dr"
.LC30:
	.ascii "\12\12Press enter for next room\0"
.LC31:
	.ascii "\12All rooms are reserved\0"
	.text
	.align 2
	.globl	_ZN9HotelMgnt12getAvailRoomEv
	.def	_ZN9HotelMgnt12getAvailRoomEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9HotelMgnt12getAvailRoomEv
_ZN9HotelMgnt12getAvailRoomEv:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rdi
	.seh_pushreg	%rdi
	pushq	%rsi
	.seh_pushreg	%rsi
	subq	$336, %rsp
	.seh_stackalloc	336
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, 240(%rbp)
	movl	$0, 200(%rbp)
	movl	$0, 204(%rbp)
	jmp	.L32
.L34:
	movl	204(%rbp), %eax
	cltq
	imulq	$276, %rax, %rdx
	leaq	rooms(%rip), %rax
	movl	12(%rdx,%rax), %eax
	testl	%eax, %eax
	jne	.L33
	movq	240(%rbp), %r8
	movl	204(%rbp), %eax
	cltq
	imulq	$276, %rax, %rcx
	leaq	rooms(%rip), %rdx
	leaq	-96(%rbp), %rax
	addq	%rcx, %rdx
	movl	$34, %ecx
	movq	%rax, %rdi
	movq	%rdx, %rsi
	rep movsq
	movq	%rsi, %rdx
	movq	%rdi, %rax
	movl	(%rdx), %ecx
	movl	%ecx, (%rax)
	addq	$4, %rax
	addq	$4, %rdx
	leaq	-96(%rbp), %rax
	movq	%rax, %rdx
	movq	%r8, %rcx
	call	_ZN4Room11displayRoomES_
	leaq	.LC30(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$1, 200(%rbp)
	call	getch
.L33:
	addl	$1, 204(%rbp)
.L32:
	movl	count(%rip), %eax
	cmpl	%eax, 204(%rbp)
	setl	%al
	testb	%al, %al
	jne	.L34
	cmpl	$0, 200(%rbp)
	jne	.L31
	leaq	.LC31(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	call	getch
	nop
.L31:
	addq	$336, %rsp
	popq	%rsi
	popq	%rdi
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC32:
	.ascii "\12Customer Name: \0"
.LC33:
	.ascii "\12Room Number: \0"
.LC34:
	.ascii "\12\12Press enter for next record\0"
.LC35:
	.ascii "\12Person not found.\0"
	.text
	.align 2
	.globl	_ZN9HotelMgnt14searchCustomerEPc
	.def	_ZN9HotelMgnt14searchCustomerEPc;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9HotelMgnt14searchCustomerEPc
_ZN9HotelMgnt14searchCustomerEPc:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$56, %rsp
	.seh_stackalloc	56
	.seh_setframe	%rbp, 64
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movl	$0, -24(%rbp)
	movl	$0, -20(%rbp)
	jmp	.L37
.L41:
	movl	-20(%rbp), %eax
	cltq
	imulq	$276, %rax, %rdx
	leaq	rooms(%rip), %rax
	movl	12(%rdx,%rax), %eax
	cmpl	$1, %eax
	jne	.L38
	movl	-20(%rbp), %eax
	cltq
	imulq	$276, %rax, %rax
	leaq	16(%rax), %rdx
	leaq	rooms(%rip), %rax
	leaq	(%rdx,%rax), %rcx
	movq	24(%rbp), %rax
	movq	%rax, %rdx
	call	stricmp
	testl	%eax, %eax
	jne	.L38
	movl	$1, %eax
	jmp	.L39
.L38:
	movl	$0, %eax
.L39:
	testb	%al, %al
	je	.L40
	movl	-20(%rbp), %eax
	cltq
	imulq	$276, %rax, %rax
	leaq	16(%rax), %rdx
	leaq	rooms(%rip), %rax
	leaq	(%rdx,%rax), %rbx
	leaq	.LC32(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rbx, %rdx
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	-20(%rbp), %eax
	cltq
	imulq	$276, %rax, %rdx
	leaq	rooms(%rip), %rax
	movl	4(%rdx,%rax), %ebx
	leaq	.LC33(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	%ebx, %edx
	movq	%rax, %rcx
	call	_ZNSolsEi
	leaq	.LC34(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$1, -24(%rbp)
	call	getch
.L40:
	addl	$1, -20(%rbp)
.L37:
	movl	count(%rip), %eax
	cmpl	%eax, -20(%rbp)
	setl	%al
	testb	%al, %al
	jne	.L41
	cmpl	$0, -24(%rbp)
	jne	.L36
	leaq	.LC35(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	call	getch
	nop
.L36:
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC37:
	.ascii "\12Enter Number of Days:\11\0"
	.align 8
.LC38:
	.ascii "\12\11######## CheckOut Details ########\12\0"
.LC39:
	.ascii "\12Customer Name : \0"
.LC40:
	.ascii "\12Room Number : \0"
.LC41:
	.ascii "\12Address : \0"
.LC42:
	.ascii "\12Phone : \0"
.LC43:
	.ascii "\12Total Amount Due : \0"
.LC44:
	.ascii " /\0"
.LC45:
	.ascii "\12Advance Paid: \0"
.LC46:
	.ascii "\12*** Total Payable: \0"
.LC47:
	.ascii "/ only\0"
	.text
	.align 2
	.globl	_ZN9HotelMgnt8checkOutEi
	.def	_ZN9HotelMgnt8checkOutEi;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9HotelMgnt8checkOutEi
_ZN9HotelMgnt8checkOutEi:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%r15
	.seh_pushreg	%r15
	pushq	%r14
	.seh_pushreg	%r14
	pushq	%r13
	.seh_pushreg	%r13
	pushq	%r12
	.seh_pushreg	%r12
	pushq	%rdi
	.seh_pushreg	%rdi
	pushq	%rsi
	.seh_pushreg	%rsi
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$360, %rsp
	.seh_stackalloc	360
	leaq	128(%rsp), %rbp
	movaps	%xmm6, 64(%rbp)
	.seh_savexmm	%xmm6, 192
	movaps	%xmm7, 80(%rbp)
	.seh_savexmm	%xmm7, 208
	movaps	%xmm8, 96(%rbp)
	.seh_savexmm	%xmm8, 224
	movaps	%xmm9, 112(%rbp)
	.seh_savexmm	%xmm9, 240
	movaps	%xmm10, 128(%rbp)
	.seh_savexmm	%xmm10, 256
	movaps	%xmm11, 144(%rbp)
	.seh_savexmm	%xmm11, 272
	movaps	%xmm12, 160(%rbp)
	.seh_savexmm	%xmm12, 288
	movaps	%xmm13, 176(%rbp)
	.seh_savexmm	%xmm13, 304
	movaps	%xmm14, 192(%rbp)
	.seh_savexmm	%xmm14, 320
	movaps	%xmm15, 208(%rbp)
	.seh_savexmm	%xmm15, 336
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, 304(%rbp)
	movl	%edx, 312(%rbp)
	leaq	__gxx_personality_sj0(%rip), %rax
	movq	%rax, -16(%rbp)
	leaq	.LLSDA996(%rip), %rax
	movq	%rax, -8(%rbp)
	movq	%rbp, %rax
	leaq	64(%rbp), %rdx
	movq	%rdx, (%rax)
	leaq	.L50(%rip), %rdx
	movq	%rdx, 8(%rax)
	movq	%rsp, 16(%rax)
	leaq	-64(%rbp), %rax
	movq	%rax, %rcx
	call	_Unwind_SjLj_Register
	movl	$0, 56(%rbp)
	movl	.LC36(%rip), %eax
	movl	%eax, 52(%rbp)
	movl	$0, 60(%rbp)
	jmp	.L44
.L47:
	movl	60(%rbp), %eax
	cltq
	imulq	$276, %rax, %rdx
	leaq	rooms(%rip), %rax
	movl	12(%rdx,%rax), %eax
	cmpl	$1, %eax
	jne	.L45
	movl	60(%rbp), %eax
	cltq
	imulq	$276, %rax, %rdx
	leaq	rooms(%rip), %rax
	movl	4(%rdx,%rax), %eax
	cmpl	312(%rbp), %eax
	jne	.L45
	movl	$1, 56(%rbp)
	jmp	.L46
.L45:
	addl	$1, 60(%rbp)
.L44:
	movl	count(%rip), %eax
	cmpl	%eax, 60(%rbp)
	setl	%al
	testb	%al, %al
	jne	.L47
.L46:
	cmpl	$1, 56(%rbp)
	jne	.L48
	movl	$1, -56(%rbp)
	leaq	.LC37(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	48(%rbp), %rax
	movq	%rax, %rdx
	leaq	_ZSt3cin(%rip), %rcx
	call	_ZNSirsERi
	movl	60(%rbp), %eax
	cltq
	imulq	$276, %rax, %rdx
	leaq	rooms(%rip), %rax
	movl	8(%rdx,%rax), %edx
	movl	48(%rbp), %eax
	imull	%edx, %eax
	cvtsi2ss	%eax, %xmm0
	movss	%xmm0, 52(%rbp)
	leaq	.LC38(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	60(%rbp), %eax
	cltq
	imulq	$276, %rax, %rax
	leaq	16(%rax), %rdx
	leaq	rooms(%rip), %rax
	addq	%rdx, %rax
	movq	%rax, 40(%rbp)
	leaq	.LC39(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	40(%rbp), %rdx
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	60(%rbp), %eax
	cltq
	imulq	$276, %rax, %rdx
	leaq	rooms(%rip), %rax
	movl	4(%rdx,%rax), %eax
	movl	%eax, -68(%rbp)
	leaq	.LC40(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	-68(%rbp), %edx
	movq	%rax, %rcx
	call	_ZNSolsEi
	movl	60(%rbp), %eax
	cltq
	imulq	$276, %rax, %rax
	leaq	112(%rax), %rdx
	leaq	rooms(%rip), %rax
	addq	%rdx, %rax
	addq	$4, %rax
	movq	%rax, -80(%rbp)
	leaq	.LC41(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	-80(%rbp), %rdx
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	60(%rbp), %eax
	cltq
	imulq	$276, %rax, %rax
	leaq	208(%rax), %rdx
	leaq	rooms(%rip), %rax
	addq	%rdx, %rax
	addq	$8, %rax
	movq	%rax, -88(%rbp)
	leaq	.LC42(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	-88(%rbp), %rdx
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	.LC43(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rdx
	movl	52(%rbp), %eax
	movl	%eax, -96(%rbp)
	movss	-96(%rbp), %xmm1
	movq	%rdx, %rcx
	call	_ZNSolsEf
	leaq	.LC44(%rip), %rdx
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	60(%rbp), %eax
	cltq
	imulq	$276, %rax, %rdx
	leaq	256+rooms(%rip), %rax
	movss	12(%rdx,%rax), %xmm0
	movss	%xmm0, -72(%rbp)
	leaq	.LC45(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movss	-72(%rbp), %xmm1
	movq	%rax, %rcx
	call	_ZNSolsEf
	leaq	.LC44(%rip), %rdx
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	60(%rbp), %eax
	cltq
	imulq	$276, %rax, %rdx
	leaq	256+rooms(%rip), %rax
	movss	12(%rdx,%rax), %xmm1
	movss	52(%rbp), %xmm0
	movaps	%xmm0, %xmm2
	subss	%xmm1, %xmm2
	movss	%xmm2, -92(%rbp)
	leaq	.LC46(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movss	-92(%rbp), %xmm1
	movq	%rax, %rcx
	call	_ZNSolsEf
	leaq	.LC47(%rip), %rdx
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	60(%rbp), %eax
	cltq
	imulq	$276, %rax, %rdx
	leaq	rooms(%rip), %rax
	movl	$0, 12(%rdx,%rax)
.L48:
	movl	$1, -56(%rbp)
	call	getch
	jmp	.L52
.L50:
	leaq	-64(%rbp), %rbp
	movq	-48(%rbp), %rax
	movl	$-1, -56(%rbp)
	movq	%rax, %rcx
	call	_Unwind_SjLj_Resume
.L52:
	leaq	-64(%rbp), %rax
	movq	%rax, %rcx
	call	_Unwind_SjLj_Unregister
	nop
	movaps	64(%rbp), %xmm6
	movaps	80(%rbp), %xmm7
	movaps	96(%rbp), %xmm8
	movaps	112(%rbp), %xmm9
	movaps	128(%rbp), %xmm10
	movaps	144(%rbp), %xmm11
	movaps	160(%rbp), %xmm12
	movaps	176(%rbp), %xmm13
	movaps	192(%rbp), %xmm14
	movaps	208(%rbp), %xmm15
	addq	$360, %rsp
	popq	%rbx
	popq	%rsi
	popq	%rdi
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	popq	%rbp
	ret
	.section	.gcc_except_table,"w"
.LLSDA996:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE996-.LLSDACSB996
.LLSDACSB996:
	.uleb128 0
	.uleb128 0
.LLSDACSE996:
	.text
	.seh_endproc
	.section .rdata,"dr"
.LC48:
	.ascii "cls\0"
.LC49:
	.ascii "\12### Manage Rooms ###\0"
.LC50:
	.ascii "\12"
	.ascii "1. Add Room\0"
.LC51:
	.ascii "\12"
	.ascii "2. Search Room\0"
.LC52:
	.ascii "\12"
	.ascii "3. Back to Main Menu\0"
.LC53:
	.ascii "\12\12Enter Option: \0"
.LC54:
	.ascii "\12Enter Room Number: \0"
	.align 8
.LC55:
	.ascii "\12Room Number is Present.\12Please enter unique Number\0"
.LC56:
	.ascii "\12Enter room number: \0"
.LC57:
	.ascii "\12Please Enter correct option\0"
	.text
	.globl	_Z11manageRoomsv
	.def	_Z11manageRoomsv;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z11manageRoomsv
_Z11manageRoomsv:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%r15
	.seh_pushreg	%r15
	pushq	%r14
	.seh_pushreg	%r14
	pushq	%r13
	.seh_pushreg	%r13
	pushq	%r12
	.seh_pushreg	%r12
	pushq	%rdi
	.seh_pushreg	%rdi
	pushq	%rsi
	.seh_pushreg	%rsi
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$920, %rsp
	.seh_stackalloc	920
	leaq	128(%rsp), %rbp
	movaps	%xmm6, 624(%rbp)
	.seh_savexmm	%xmm6, 752
	movaps	%xmm7, 640(%rbp)
	.seh_savexmm	%xmm7, 768
	movaps	%xmm8, 656(%rbp)
	.seh_savexmm	%xmm8, 784
	movaps	%xmm9, 672(%rbp)
	.seh_savexmm	%xmm9, 800
	movaps	%xmm10, 688(%rbp)
	.seh_savexmm	%xmm10, 816
	movaps	%xmm11, 704(%rbp)
	.seh_savexmm	%xmm11, 832
	movaps	%xmm12, 720(%rbp)
	.seh_savexmm	%xmm12, 848
	movaps	%xmm13, 736(%rbp)
	.seh_savexmm	%xmm13, 864
	movaps	%xmm14, 752(%rbp)
	.seh_savexmm	%xmm14, 880
	movaps	%xmm15, 768(%rbp)
	.seh_savexmm	%xmm15, 896
	.seh_setframe	%rbp, 128
	.seh_endprologue
	leaq	__gxx_personality_sj0(%rip), %rax
	movq	%rax, -32(%rbp)
	leaq	.LLSDA997(%rip), %rax
	movq	%rax, -24(%rbp)
	leaq	-16(%rbp), %rax
	leaq	624(%rbp), %rdx
	movq	%rdx, (%rax)
	leaq	.L70(%rip), %rdx
	movq	%rdx, 8(%rax)
	movq	%rsp, 16(%rax)
	leaq	-80(%rbp), %rax
	movq	%rax, %rcx
	call	_Unwind_SjLj_Register
	movl	$0, 616(%rbp)
.L68:
	movl	$1, -72(%rbp)
	leaq	.LC48(%rip), %rcx
	call	system
	leaq	.LC49(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	.LC50(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	.LC51(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	.LC52(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	.LC53(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	612(%rbp), %rax
	movq	%rax, %rdx
	leaq	_ZSt3cin(%rip), %rcx
	call	_ZNSirsERi
	movl	612(%rbp), %eax
	cmpl	$2, %eax
	je	.L56
	cmpl	$3, %eax
	je	.L75
	cmpl	$1, %eax
	jne	.L73
.L55:
	movl	$1, -72(%rbp)
	leaq	.LC54(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	608(%rbp), %rax
	movq	%rax, %rdx
	leaq	_ZSt3cin(%rip), %rcx
	call	_ZNSirsERi
	movl	$0, 620(%rbp)
	movl	$0, 620(%rbp)
	jmp	.L58
.L60:
	movl	620(%rbp), %eax
	cltq
	imulq	$276, %rax, %rdx
	leaq	rooms(%rip), %rax
	movl	4(%rdx,%rax), %edx
	movl	608(%rbp), %eax
	cmpl	%eax, %edx
	jne	.L59
	movl	$1, 616(%rbp)
.L59:
	addl	$1, 620(%rbp)
.L58:
	movl	count(%rip), %eax
	cmpl	%eax, 620(%rbp)
	setl	%al
	testb	%al, %al
	jne	.L60
	cmpl	$1, 616(%rbp)
	jne	.L61
	movl	$1, -72(%rbp)
	leaq	.LC55(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$0, 616(%rbp)
	call	getch
	jmp	.L67
.L61:
	movl	count(%rip), %eax
	movl	608(%rbp), %ecx
	cltq
	imulq	$276, %rax, %rax
	movq	%rax, 24(%rbp)
	leaq	rooms(%rip), %rsi
	movq	%rsi, -88(%rbp)
	leaq	32(%rbp), %rax
	leaq	320(%rbp), %rdx
	movl	$1, -72(%rbp)
	movl	%ecx, %r8d
	movq	%rax, %rcx
	call	_ZN4Room7addRoomEi
	movq	24(%rbp), %rax
	addq	-88(%rbp), %rax
	leaq	32(%rbp), %r8
	movl	$276, %r9d
	movq	%rax, %rdx
	andl	$4, %edx
	testq	%rdx, %rdx
	je	.L63
	movl	(%r8), %edx
	movl	%edx, (%rax)
	addq	$4, %rax
	addq	$4, %r8
	subl	$4, %r9d
.L63:
	movl	%r9d, %edx
	shrl	$3, %edx
	movl	%edx, %edx
	movq	%rax, %rdi
	movq	%r8, %rsi
	movq	%rdx, %rcx
	rep movsq
	movq	%rsi, %r8
	movq	%rdi, %rax
	movl	$0, %edx
	movl	%r9d, %ecx
	andl	$4, %ecx
	testl	%ecx, %ecx
	je	.L64
	movl	(%r8), %ecx
	movl	%ecx, (%rax)
	addq	$4, %rdx
.L64:
	movl	%r9d, %ecx
	andl	$2, %ecx
	testl	%ecx, %ecx
	je	.L65
	movzwl	(%r8,%rdx), %ecx
	movw	%cx, (%rax,%rdx)
	addq	$2, %rdx
.L65:
	movl	%r9d, %ecx
	andl	$1, %ecx
	testl	%ecx, %ecx
	je	.L72
	movzbl	(%r8,%rdx), %ecx
	movb	%cl, (%rax,%rdx)
.L72:
	movl	count(%rip), %eax
	addl	$1, %eax
	movl	%eax, count(%rip)
	jmp	.L67
.L56:
	movl	$1, -72(%rbp)
	leaq	.LC56(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	608(%rbp), %rax
	movq	%rax, %rdx
	leaq	_ZSt3cin(%rip), %rcx
	call	_ZNSirsERi
	movl	608(%rbp), %edx
	leaq	320(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN4Room10searchRoomEi
	jmp	.L67
.L73:
	movl	$1, -72(%rbp)
	leaq	.LC57(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	jmp	.L67
.L75:
	nop
.L67:
	movl	612(%rbp), %eax
	cmpl	$3, %eax
	setne	%al
	testb	%al, %al
	jne	.L68
	jmp	.L74
.L70:
	leaq	-624(%rbp), %rbp
	movq	-64(%rbp), %rax
	movl	$-1, -72(%rbp)
	movq	%rax, %rcx
	call	_Unwind_SjLj_Resume
.L74:
	leaq	-80(%rbp), %rax
	movq	%rax, %rcx
	call	_Unwind_SjLj_Unregister
	nop
	movaps	624(%rbp), %xmm6
	movaps	640(%rbp), %xmm7
	movaps	656(%rbp), %xmm8
	movaps	672(%rbp), %xmm9
	movaps	688(%rbp), %xmm10
	movaps	704(%rbp), %xmm11
	movaps	720(%rbp), %xmm12
	movaps	736(%rbp), %xmm13
	movaps	752(%rbp), %xmm14
	movaps	768(%rbp), %xmm15
	addq	$920, %rsp
	popq	%rbx
	popq	%rsi
	popq	%rdi
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	popq	%rbp
	ret
	.section	.gcc_except_table,"w"
.LLSDA997:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE997-.LLSDACSB997
.LLSDACSB997:
	.uleb128 0
	.uleb128 0
.LLSDACSE997:
	.text
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
	.align 8
.LC58:
	.ascii "######## Hotel Management #########\12\0"
.LC59:
	.ascii "\12"
	.ascii "1. Manage Rooms\0"
.LC60:
	.ascii "\12"
	.ascii "2. Check-In Room\0"
.LC61:
	.ascii "\12"
	.ascii "3. Available Rooms\0"
.LC62:
	.ascii "\12"
	.ascii "4. Search Customer\0"
.LC63:
	.ascii "\12"
	.ascii "5. Check-Out Room\0"
.LC64:
	.ascii "\12"
	.ascii "6. Guest Summary Report\0"
.LC65:
	.ascii "\12"
	.ascii "7. Exit\0"
	.align 8
.LC66:
	.ascii "\12Rooms data is not available.\12Please add the rooms first.\0"
	.align 8
.LC67:
	.ascii "\12Rooms are not available.\12Please add the rooms first.\0"
.LC68:
	.ascii "Enter Customer Name: \0"
.LC69:
	.ascii "Enter Room Number : \0"
	.align 8
.LC70:
	.ascii "\12THANK YOU! FOR USING SOFTWARE\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%r15
	.seh_pushreg	%r15
	pushq	%r14
	.seh_pushreg	%r14
	pushq	%r13
	.seh_pushreg	%r13
	pushq	%r12
	.seh_pushreg	%r12
	pushq	%rdi
	.seh_pushreg	%rdi
	pushq	%rsi
	.seh_pushreg	%rsi
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$712, %rsp
	.seh_stackalloc	712
	leaq	128(%rsp), %rbp
	movaps	%xmm6, 416(%rbp)
	.seh_savexmm	%xmm6, 544
	movaps	%xmm7, 432(%rbp)
	.seh_savexmm	%xmm7, 560
	movaps	%xmm8, 448(%rbp)
	.seh_savexmm	%xmm8, 576
	movaps	%xmm9, 464(%rbp)
	.seh_savexmm	%xmm9, 592
	movaps	%xmm10, 480(%rbp)
	.seh_savexmm	%xmm10, 608
	movaps	%xmm11, 496(%rbp)
	.seh_savexmm	%xmm11, 624
	movaps	%xmm12, 512(%rbp)
	.seh_savexmm	%xmm12, 640
	movaps	%xmm13, 528(%rbp)
	.seh_savexmm	%xmm13, 656
	movaps	%xmm14, 544(%rbp)
	.seh_savexmm	%xmm14, 672
	movaps	%xmm15, 560(%rbp)
	.seh_savexmm	%xmm15, 688
	.seh_setframe	%rbp, 128
	.seh_endprologue
	leaq	__gxx_personality_sj0(%rip), %rax
	movq	%rax, -48(%rbp)
	leaq	.LLSDA998(%rip), %rax
	movq	%rax, -40(%rbp)
	leaq	-32(%rbp), %rax
	leaq	416(%rbp), %rdx
	movq	%rdx, (%rax)
	leaq	.L98(%rip), %rdx
	movq	%rdx, 8(%rax)
	movq	%rsp, 16(%rax)
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_Unwind_SjLj_Register
	call	__main
	movl	$1, -88(%rbp)
	leaq	.LC48(%rip), %rcx
	call	system
.L95:
	movl	$1, -88(%rbp)
	leaq	.LC48(%rip), %rcx
	call	system
	leaq	.LC58(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	.LC59(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	.LC60(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	.LC61(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	.LC62(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	.LC63(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	.LC64(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	.LC65(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	.LC53(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	412(%rbp), %rax
	movq	%rax, %rdx
	leaq	_ZSt3cin(%rip), %rcx
	call	_ZNSirsERi
	movl	412(%rbp), %eax
	cmpl	$7, %eax
	ja	.L77
	movl	%eax, %eax
	leaq	0(,%rax,4), %rdx
	leaq	.L85(%rip), %rax
	movl	(%rdx,%rax), %eax
	movslq	%eax, %rdx
	leaq	.L85(%rip), %rax
	addq	%rdx, %rax
	jmp	*%rax
	.section .rdata,"dr"
	.align 4
.L85:
	.long	.L77-.L85
	.long	.L78-.L85
	.long	.L79-.L85
	.long	.L80-.L85
	.long	.L81-.L85
	.long	.L82-.L85
	.long	.L83-.L85
	.long	.L84-.L85
	.text
.L78:
	movl	$1, -88(%rbp)
	call	_Z11manageRoomsv
	jmp	.L86
.L79:
	movl	count(%rip), %eax
	testl	%eax, %eax
	jne	.L87
	movl	$1, -88(%rbp)
	leaq	.LC66(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	call	getch
	jmp	.L86
.L87:
	leaq	128(%rbp), %rax
	movl	$1, -88(%rbp)
	movq	%rax, %rcx
	call	_ZN9HotelMgnt7checkInEv
	jmp	.L86
.L80:
	movl	count(%rip), %eax
	testl	%eax, %eax
	jne	.L89
	movl	$1, -88(%rbp)
	leaq	.LC66(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	call	getch
	jmp	.L86
.L89:
	leaq	128(%rbp), %rax
	movl	$1, -88(%rbp)
	movq	%rax, %rcx
	call	_ZN9HotelMgnt12getAvailRoomEv
	jmp	.L86
.L81:
	movl	count(%rip), %eax
	testl	%eax, %eax
	jne	.L91
	movl	$1, -88(%rbp)
	leaq	.LC67(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	call	getch
	jmp	.L86
.L91:
	movl	$1, -88(%rbp)
	leaq	.LC68(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	16(%rbp), %rax
	movq	%rax, %rdx
	leaq	_ZSt3cin(%rip), %rcx
	call	_ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_PS3_
	leaq	16(%rbp), %rdx
	leaq	128(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN9HotelMgnt14searchCustomerEPc
	jmp	.L86
.L82:
	movl	count(%rip), %eax
	testl	%eax, %eax
	jne	.L93
	movl	$1, -88(%rbp)
	leaq	.LC67(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	call	getch
	jmp	.L86
.L93:
	movl	$1, -88(%rbp)
	leaq	.LC69(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	408(%rbp), %rax
	movq	%rax, %rdx
	leaq	_ZSt3cin(%rip), %rcx
	call	_ZNSirsERi
	movl	408(%rbp), %edx
	leaq	128(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN9HotelMgnt8checkOutEi
	jmp	.L86
.L83:
	leaq	128(%rbp), %rax
	movl	$1, -88(%rbp)
	movq	%rax, %rcx
	call	_ZN9HotelMgnt18guestSummaryReportEv
	jmp	.L86
.L84:
	movl	$1, -88(%rbp)
	leaq	.LC70(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	jmp	.L86
.L77:
	movl	$1, -88(%rbp)
	leaq	.LC57(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	nop
.L86:
	movl	412(%rbp), %eax
	cmpl	$7, %eax
	setne	%al
	testb	%al, %al
	jne	.L95
	movl	$1, -88(%rbp)
	call	getch
	movl	$0, %eax
	movl	%eax, 12(%rbp)
	jmp	.L100
.L98:
	leaq	-416(%rbp), %rbp
	movq	-80(%rbp), %rax
	movl	$-1, -88(%rbp)
	movq	%rax, %rcx
	call	_Unwind_SjLj_Resume
.L100:
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_Unwind_SjLj_Unregister
	movl	12(%rbp), %eax
	movaps	416(%rbp), %xmm6
	movaps	432(%rbp), %xmm7
	movaps	448(%rbp), %xmm8
	movaps	464(%rbp), %xmm9
	movaps	480(%rbp), %xmm10
	movaps	496(%rbp), %xmm11
	movaps	512(%rbp), %xmm12
	movaps	528(%rbp), %xmm13
	movaps	544(%rbp), %xmm14
	movaps	560(%rbp), %xmm15
	addq	$712, %rsp
	popq	%rbx
	popq	%rsi
	popq	%rdi
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	popq	%rbp
	ret
	.section	.gcc_except_table,"w"
.LLSDA998:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE998-.LLSDACSB998
.LLSDACSB998:
	.uleb128 0
	.uleb128 0
.LLSDACSE998:
	.text
	.seh_endproc
	.def	__tcf_0;	.scl	3;	.type	32;	.endef
	.seh_proc	__tcf_0
__tcf_0:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_setframe	%rbp, 32
	.seh_endprologue
	leaq	_ZStL8__ioinit(%rip), %rcx
	call	_ZNSt8ios_base4InitD1Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	_Z41__static_initialization_and_destruction_0ii;	.scl	3;	.type	32;	.endef
	.seh_proc	_Z41__static_initialization_and_destruction_0ii
_Z41__static_initialization_and_destruction_0ii:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_setframe	%rbp, 32
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	%edx, 24(%rbp)
	cmpl	$1, 16(%rbp)
	jne	.L102
	cmpl	$65535, 24(%rbp)
	jne	.L102
	leaq	_ZStL8__ioinit(%rip), %rcx
	call	_ZNSt8ios_base4InitC1Ev
	leaq	__tcf_0(%rip), %rcx
	call	atexit
	nop
.L102:
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	_GLOBAL__sub_I_rooms;	.scl	3;	.type	32;	.endef
	.seh_proc	_GLOBAL__sub_I_rooms
_GLOBAL__sub_I_rooms:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_setframe	%rbp, 32
	.seh_endprologue
	movl	$65535, %edx
	movl	$1, %ecx
	call	_Z41__static_initialization_and_destruction_0ii
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.ctors,"w"
	.align 8
	.quad	_GLOBAL__sub_I_rooms
	.section .rdata,"dr"
	.align 4
.LC36:
	.long	0
	.def	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc;	.scl	2;	.type	32;	.endef
	.def	_ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_RS3_;	.scl	2;	.type	32;	.endef
	.def	_ZNSirsERi;	.scl	2;	.type	32;	.endef
	.def	getch;	.scl	2;	.type	32;	.endef
	.def	_ZNSolsEi;	.scl	2;	.type	32;	.endef
	.def	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c;	.scl	2;	.type	32;	.endef
	.def	_Unwind_SjLj_Resume;	.scl	2;	.type	32;	.endef
	.def	_ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_PS3_;	.scl	2;	.type	32;	.endef
	.def	_ZNSirsERf;	.scl	2;	.type	32;	.endef
	.def	stricmp;	.scl	2;	.type	32;	.endef
	.def	_ZNSolsEf;	.scl	2;	.type	32;	.endef
	.def	system;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	atexit;	.scl	2;	.type	32;	.endef
