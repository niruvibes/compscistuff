#include <stdio.h>

int main(void){
    // Problem one, input a number and check if it is even or not, and return an according result
    int number;
    printf("Type a number to scan: \n");
    int scanf_return = scanf("%d", &number);
    if (scanf_return == 0){
        printf("Incorrect input\n");
    } else if (number % 2 == 0){
        printf("The number %d is even\n", number);
    } else {
        printf("The number %d is odd\n", number);
    }

    return 0;
}

