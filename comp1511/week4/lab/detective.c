// Detective
// detective.c
//
// This program was written by YOUR-jeil-HERE (z5592479)
// on INSERT-20/06/24-HERE
//
// A program to decipher hidden messages in enemy codes.

#include <stdio.h>

#define MAX_SIZE 100

struct code {
    char letter;
    int number;
};

int main(void) {
    //////////////// DO NOT CHANGE ANY OF THE CODE BELOW HERE //////////////////
    struct code message[MAX_SIZE];

    // read in message
    printf("Please enter Encrypted Message: ");
    int i = 0;
    char letter;
    scanf("%c", &letter);
    while (letter != '\n') {
        message[i].letter = letter;
        scanf("%c", &letter);
        i++;
    }

    // read in numbers
    printf("Please enter Secret Numbers: ");
    int j = 0;
    int number;
    scanf("%d", &number);
    message[j].number = number;
    j++;
    while (j != i) {
        scanf("-%d", &number);
        message[j].number = number;
        j++;
    }
    //////////////// DO NOT CHANGE ANY OF THE CODE ABOVE HERE //////////////////

    ////////////////////////////////////////////////////////////////////////////
    ///////////////////// ONLY WRITE CODE BELOW HERE ///////////////////////////
    ////////////////////////////////////////////////////////////////////////////

    // TODO: Use the message array to reveal the secret message!

    ////////////////////////////////////////////////////////////////////////////
    ///////////////////// ONLY WRITE CODE ABOVE HERE ///////////////////////////
    ////////////////////////////////////////////////////////////////////////////
    return 0;
}
