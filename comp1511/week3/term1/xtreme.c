// i think i reached the point where i cant rely on my previous knowledge to continue this course
// which is mighty disapointing considering its week 3
// this was a struggle
// z5592479 Neil

#include <stdio.h>

int main(void) {

    int size;
    // int width, height;
    int width_counter, height_counter = 1;

    printf("Enter size: ");
    scanf(" %d", &size);

    while (height_counter <= size) {
        width_counter = 1;
        while (width_counter <= size) {
            if (height_counter % 4 == width_counter % 4) {
                putchar('*');
            // } else if (height_counter % 4 == (width_counter - 2) % 4) {
            //     putchar('*');
            } else {
                putchar('-');
            }
            width_counter++;
        }
        putchar('\n');
        height_counter++;

    }

}