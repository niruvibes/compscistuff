// Written by Neil tharol z5592479
// on 12/07/24

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int main(int argc, char *argv[]) {
    printf("Enter text:\n");
    char map[27];
    for (int i = 0; i < 27; i++) {
        map[i] = argv[1][i];
    }
    char input;
    while (scanf("%c", &input) != EOF) {
        char output = input;
        if (input == ' ') {
            output = input;
        } else if (input >= 'A' && input <= 'Z') {
            output = map[(input - 'A')] - 32;
        } else if (input >= 'a' && input <= 'z') {
            output = map[(input - 'a')];
        }
        printf("%c", output);
    }
}