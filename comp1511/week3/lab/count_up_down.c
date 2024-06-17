// print integers from 0 to n, up or down
// z5592479 Neil Tharol

#include<stdio.h>

int main(void){

    int number;
    int i = 0;

    printf("Enter number: ");
    scanf(" %d", &number);
    // printf("%d\n", number);

    if (number > 0) {

        while (i <= number) {
            printf("%d\n", i++);
        }
    } else if (number < 0) {

        while (i >= number) {
            printf("%d\n", i--);
        }
    }

}