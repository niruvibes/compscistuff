// mahoraga please help me
// z5592479 Neil Tharol

#include<stdio.h>

int main(void){

    char starting;
    char target;

    printf("Please enter starting letter: ");
    scanf(" %c", &starting);
    printf("Please enter target letter: ");
    scanf(" %c", &target);

    if ('A' <= starting && starting <= 'Z' && 
        'A' <= target && target <= 'Z') {
        if (starting < target && ((target - starting) <= 13)) {
            while (starting <= target) {
                printf("%c", starting++);
            }
            // printf("test1");
        } else if (starting > target && ((starting - target) < 13)) {
            while (starting >= target) {
                printf("%c", starting--);
            }
            // printf("test2");
        } else if (starting < target && ((target - starting) > 13)) {
            while (starting >= 'A') {
                printf("%c", starting--);
            }
            starting = 'Z';
            while (starting >= target) {
                printf("%c", starting--);
            }
            // printf("test3");
        } else if (starting > target && ((starting - target) >= 13)) {
            while (starting <= 'Z') {
                printf("%c", starting++);
            }
            starting = 'A';
            while (starting <= target) {
                printf("%c", starting++);
            }
            // printf("test4");
        } else if (starting == target) {
            printf("%c", starting);
            // printf("test5");
        }
        // printf("test");
    }

    if ('a' <= starting && starting <= 'z' && 
        'a' <= target && target <= 'z') {
        if (starting < target && ((target - starting) <= 13)) {
            while (starting <= target) {
                printf("%c", starting++);
            }
            // printf("test1");
        } else if (starting > target && ((starting - target) < 13)) {
            while (starting >= target) {
                printf("%c", starting--);
            }
            // printf("test2");
        } else if (starting < target && ((target - starting) > 13)) {
            while (starting >= 'a') {
                printf("%c", starting--);
            }
            starting = 'z';
            while (starting >= target) {
                printf("%c", starting--);
            }
            // printf("test3");
        } else if (starting > target && ((starting - target) >= 13)) {
            while (starting <= 'z') {
                printf("%c", starting++);
            }
            starting = 'a';
            while (starting <= target) {
                printf("%c", starting++);
            }
            // printf("test4");
        } else if (starting == target) {
            printf("%c", starting);
            // printf("test5");
        }
        // printf("test");
    }

    printf("\n");
}