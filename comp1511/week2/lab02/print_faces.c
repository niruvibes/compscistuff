// bro this is cooked 
// z5592479 Neil Tharol
// To the marker.
// I sincerely apologise for the absolute garbage this is.
// You maybe able to tell i tried a few different methods,
// before i settled with this one, so the code doesnt look great.
// once again, im sorry. -Neil

#include <stdio.h>

int main(void) {

    // 1 for true 0 for false 2 for fixing something
    int method1; 

    char letter1;
    char letter2;
    char letter3;
    char letter4;

    char left_eyebrow;
    char right_eyebrow;
    // char nose;
    // char mouth;

    printf("How do you want to build a face?: ");
    scanf("%c", &letter1);
    scanf("%c", &letter2);
    scanf("%c", &letter3);

    if (letter1 == 'a') {
        left_eyebrow = '_';
        printf("%c ", left_eyebrow);
    } else if (letter1 == 'b') {
        left_eyebrow = '~';
        printf("%c ", left_eyebrow);
    } else if (letter1 == 'c') {
        left_eyebrow = '\\';
        printf("%c ", left_eyebrow);
    } else if (letter1 == 'd') {
        left_eyebrow = '/';
        printf("%c ", left_eyebrow);
    } else {
        printf("debug1\n");
        left_eyebrow = '/';
    }

    
    if (letter2 == 'a' || letter2 == 'b' ||
        letter2 == 'c' || letter2 == 'd') {
        scanf("%c", &letter4);
        method1 = 0;
        if (letter2 == 'a') {
            right_eyebrow = '_';
            printf("%c\n", right_eyebrow);
        } else if (letter2 == 'b') {
            right_eyebrow = '~';
            printf("%c\n", right_eyebrow);
        } else if (letter2 == 'c') {
            right_eyebrow = '\\';
            printf("%c\n", right_eyebrow);
        } else if (letter2 == 'd') {
            right_eyebrow = '/';
            printf("%c\n", right_eyebrow);
        } else {
            printf("debug2\n");
        }
    } else if (letter2 == 'e') {
        // nose = '^';
        printf("%c\n", left_eyebrow);
        printf("O O\n");
        printf(" ^ \n");
        method1 = 1;
        // right_eyebrow = left_eyebrow;
    } else if (letter2 == 'f') {
        // nose = '~';
        printf("%c\n", left_eyebrow);
        printf("O O\n");
        printf(" ~ \n");
        method1 = 1;
        // right_eyebrow = left_eyebrow;
    } else {
        printf("debug3\n");
        // this is not good practice
        method1 = 2;
    }

    if (method1 == 0) {
        if (letter3 == 'e') {
            printf("O O\n");
            printf(" ^ \n");
        } else if (letter3 == 'f') {
            printf("O O\n");
            printf(" ~ \n");
        } else {
            printf("debug4\n");
        }
    } else {

    }

    if (method1 == 1) {
        if (letter3 == 'g') {
            // mouth = '\\_/';
            printf("\\_/\n");
        } else if (letter3 == 'h') {
            // mouth = '/-\\';
            printf("/-\\\n");
        } else if (letter3 == 'i') {
            // mouth = 'o';
            printf(" o \n");
        } else {
            printf("debug5\n");
        }
    } else if (method1 == 0) {
        if (letter4 == 'g') {
            // mouth = '\_/';
            printf("\\_/\n");
        } else if (letter4 == 'h') {
            // mouth = '/-\\';
            printf("/-\\\n");
        } else if (letter4 == 'i') {
            // mouth = 'o';
            printf(" o \n");
        } else {
            printf("debug6\n");
        }
    }
    
    return 0;
}
