
// Wrriten by Neil Tharol, z5592479
// on 28/06/24
#include <stdio.h>

#define MAX_SIZE 100

int main() {
    char str[MAX_SIZE];
    int i = 0;

    printf("Input Word: ");
    fgets(str, MAX_SIZE, stdin);

    printf("\nWord square is:\n");
    while (str[i] != '\n') {
        printf("%s", str);
        i++;
    }

    return 0;
}

