
// Problem: I want to read in some numbers until a 
// negative number has been 
// entered, and sum up all the positive numbers. 

#include <stdio.h>

int main(void){
    int number = 1;
    int sum = 0;

    while (number > 0){
        sum = sum + number;
        printf("Enter a number: ");
        scanf("%d", &number);
    }
    printf("The sum of the positive numbers is %d \n", sum-1);
}