// lucas told me this was really hard
// i think he might be right
// z5592479 Neil Tharol

#include <stdio.h>

void vowel(char letter) {
    if (letter == 'a' || letter == 'e' || letter == 'i' 
        || letter == 'o' || letter == 'u' || letter == '\n'
        || letter == EOF) {
        
    } else {
        printf("%c", letter);
    }
}

int main(void) {

    char letter;

    while (scanf("%c", &letter) != EOF) {
        // printf("%c", letter);
        vowel(letter);
        if (letter == '\n' ) {
            putchar('\n');
        }
        
    }
}


