// Program which prints a letter depending on the user's request.
// by z5592479 Neil Tharol

#include <stdio.h>

int main(void) {

    char is_uppercase;
    int index;


    // TODO: scan is_uppercase
    printf("Uppercase: ");
    scanf(" %c", &is_uppercase);

    printf("Index: ");
    scanf(" %d", &index);
    index = index + 65;

    // TODO: finish the program
    if (is_uppercase == 'y') {
        if (90 >= index && index >= 65) {
            printf("The letter is %c \n", index);
        } else {
            printf("The letter is %c \n", index - 32);
        }
    } else if (is_uppercase == 'n') {
        if (122 >= index && index >= 97) {
            printf("The letter is %c \n", index);
        } else {
            printf("The letter is %c \n", index + 32);
        }
    } else {
        printf("You have not entered a valid letter");
    }



    return 0;
}