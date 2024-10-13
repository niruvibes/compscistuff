// debug_stringcmp.c
//
// This program takes in two strings as input and checks if they are the same
// Wrriten by Neil Tharol, z5592479
// on 28/06/24
#include <stdio.h>

#define MAX_SIZE 100

int main() {
    char str1[MAX_SIZE];
    char str2[MAX_SIZE];
    int i = 0;

    // Read input from user
    printf("Enter the first string: ");
    fgets(str1, MAX_SIZE, stdin);

    printf("Enter the second string: ");
    fgets(str2, MAX_SIZE, stdin);

    // Check if the strings are equal
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            printf("The strings are not equal!\n");
            return 0;
        }
        i++;
    }
    printf("The strings are equal!\n");


    return 0;
}

