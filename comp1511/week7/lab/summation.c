//z5592479 Neil Tharol 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int sum = 0;
    int numbers[argc];
    for (int i = 0; i < (argc); i++) {
        numbers[i] = atoi(argv[i]);
    }
    for (int i = 0; i < (argc); i++) {
        sum += numbers[i];
    }
    printf("Sum: %d\n", sum);
}