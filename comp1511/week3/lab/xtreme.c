// column think column reached the point where column cant rely on my previous knowledge to continue this course
// which is mighty disapointing considering its week 3
// this was a struggle
// z5592479 Neil

#include <stdio.h>

int main(void) {

    int size, half;
    // int width, height;
    int column = 0, row;

    printf("Enter size: ");
    scanf(" %d", &size);
    half = size/2;

    while (column < size) {
        row = 0;
        while (row < size) {
            if ((column > half && row < half) ||
                (column < half && row > half)) {
                if ((column + row + 1 - size) % 4 == 0) {
                    putchar('*');
                } else {
                    putchar('-');
                }
            } else {
                if ((column - row) % 4 == 0) {
                    putchar('*');
                } else {
                    putchar('-');
                }
            }
            
            row++;
        }
        putchar('\n');
        column++; 
    }
}