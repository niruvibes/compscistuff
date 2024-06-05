// something about making capitals not capitals
// z5592479 Neil Tharol

#include <stdio.h>

int main(void) {

    char character;
    char inverse;
    int shift;

    printf("Please enter a character: ");
    scanf(" %c", &character);

    printf("Would you like to invert the case? y or n: ");
    scanf(" %c", &inverse);

    printf("By how much would you like to shift the character? ");
    scanf(" %d", &shift);

    if (inverse == 'y') {
        if (90 >= character && character >= 65) {
            character = character + 32;
        }   else if (122 >= character && character >= 97) {
            character = character - 32;
            // printf("%c\n", character);
        }
    } else {
        
    }

    if (shift == 0) {
        
    } else {
        if (90 >= character && character >= 65 && character + (shift%26) > 90) {
            character = character + (shift%26) - 26;
            // printf("test\n");
        } else if (122 >= character && character >= 97 && character + (shift%26) > 122) {
            character = character + (shift%26) - 26;
            // printf("test2\n");
        } else {
            character = character + (shift%26);
            // printf("test3\n");
        }
    }

    printf("The character is %c! \n", character);
    return 0;

}