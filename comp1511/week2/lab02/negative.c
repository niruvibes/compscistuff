// check if a number is negative or 0
// z5592479 Neil Tharol
#include <stdio.h>

int main(void) {
    int input;
    scanf(" %d", &input);
    if (input == 0) {
        printf("You have entered zero. \n");
    } else if (input < 0) {
        printf("Don't be so negative! \n");
    } else {
        printf("You have entered a positive number. \n");
    }
}