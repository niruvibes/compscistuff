.text
main:
	# t0 - int a
	# #t1 - int b

	la	$a0, enter_num_str
	addi	$v0, $zero, 4
	syscall				# printf("Enter a number: ");

	addi 	$v0, $zero, 5
	syscall
	move	$t0, $v0		# scanf("%d", &a)
	
	la	$a0, enter_num2_str
	addi	$v0, $zero, 4
	syscall				# printf("Enter another number: ");

	addi 	$v0, $zero, 5
	syscall
	move	$t1, $v0		# scanf("%d", &b)

	la	$a0, square_sum_str
	addi	$v0, $zero, 4
	syscall				#"The sum of the square of"

	move 	$a0, $t0
	addi	$v0, $zero, 1
	syscall				# print int a

	la	$a0, and
	addi	$v0, $zero, 4
	syscall				# and

	move 	$a0, $t1
	addi	$v0, $zero, 1
	syscall				# print int b

	la	$a0, is
	addi	$v0, $zero, 4
	syscall				# is
	
	#doing math
	mul $t0, $t0, $t0		#a=a*a
	mul $t1, $t1, $t1		#b=b*b
	add $t2, $t0, $t1		#a+b

	#back to printing
	move 	$a0, $t2
	addi	$v0, $zero, 1
	syscall				# print sum of square

	addi	$v0, $zero, 11
	addi	$a0, $zero, '\n'
	syscall				# print sum of square
	
	
	#end program
	li	$v0, 0
	jr	$ra

.data
enter_num_str:	.asciiz "Enter a number: "
enter_num2_str:	.asciiz "Enter another number: "
square_sum_str: .asciiz "The sum of the square of "
and:		.asciiz " and "
is:		.asciiz " is "
