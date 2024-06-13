.text
main:
	la	$a0, enter_num_str
	addi	$v0, $zero, 4
	syscall				# printf("Enter a number: ");

	addi 	$v0, $zero, 5
	syscall
	move	$t0, $v0		# scanf("%d", &a)

	addi 	$t1, $zero, 2
	rem	$t0, $t0, $t1		# a = a/2

	BEQZ 	$t0, num_is_even	#go to there if even

	B program_end

num_is_even:
	la	$a0, even_str
	addi	$v0, $zero, 4
	syscall		

program_end:
	li	$v0, 0
	jr	$ra

.data
enter_num_str:	.asciiz "Enter a number: "
even_str:	.asciiz "Even"