syscall_print_int = 1

main:
	#register values and add
	addi	$t0, $zero, 1
	addi	$t1, $zero, 4
	add	$a0, $t0, $t1

	## printing int
	addi	$v0, $zero, syscall_print_int
	syscall

	#exit
	addi	$v0, $zero, 0
	jr 	$ra

.data
wowie_str: 	.asciiz "How we put a string into assembly"