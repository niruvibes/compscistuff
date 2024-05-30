#include <stdio.h>

int main(void){
    // Problem two, input a letter, check if its upper or lower case, then output that letter but in the opposite case
    printf("Type a letter to scan: \n");
    char letter; 
    scanf(" %c", &letter);
    if (letter <= 'z' && letter >= 'a') {
        printf("letter is lower case \n");
        // method one, characters are equal dstance apart so we can just subtract 32 (a->A)
        // convert to upper
        printf("The upper case is, %c \n", (letter-32));
    } else if (letter <= 'Z' && letter >= 'A') {
        printf("letter is upper case \n");
        // method two, find location and get the character relative in the opposite case
        // character location
        int location = letter - 65;
        // get that as a lower case
        int lowerletter = location + 'a';
        printf("The lower case is %c \n", lowerletter);
    } else {
        printf("You inputted %c which is not a letter\n", letter);
    }
    return 0;
}