# read a number n and print the integers 1..n one per line
#
# Before starting work on this task, make sure you set your tab-width to 8!
# It is also suggested to indent with tabs only.
#
# YOUR-NAME-HERE, DD/MM/YYYY

#![tabsize(8)]
.text
main:                 		# int main(void)
	la	$a0, prompt	# printf("Enter a number: ");
	li	$v0, 4
	syscall

	li	$v0, 5		# scanf("%d", number);
	syscall
	move 	$t3, $v0

	li 	$t1, 1
	b 	PRINT

PRINT:
	move	$a0, $t1	# printf("%d", number);
	li	$v0, 1
	syscall

	li	$a0, '\n'	# printf("%c", '\n');
	li	$v0, 11
	syscall

	addi	$t1, $t1, 1
	ble	$t1, $t3, PRINT
	b	end

end:
	li	$v0, 0
	jr	$ra		# return 0


.data
prompt:
	.asciiz "Enter a number: "
