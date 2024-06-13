// debug_factorial.c
//
// Write a C program that takes a positive integer as input, calculates the
// factorial of that number and prints it out.
//
// This program was written by Neil Tharol (z592479)
// on 12th june 2024

#include <stdio.h>

int main (void) {
    int num = 0;
    int factorial = 0;

    printf("Enter a number: ");
    scanf(" %d", &num);

    int counter = num;

    factorial = num;

    while (counter > 1) {
        factorial = factorial * --counter;
        // printf("%d, %d, %d\n", factorial, counter, num);
    }
    if (factorial == 0) {
        factorial = 1;
    }

    printf("The factorial of %d is %d\n", num, factorial);

    return 0;
}
