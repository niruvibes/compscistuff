//z5592479 Niel tharol 11/07/2024

#include <stdio.h>

void swap_pointers(int *a, int *b);

// This is a simple main function which could be used
// to test your swap_pointers function.
// It will not be marked.
// Only your swap_pointers function will be marked.

int main(void) {
    int first = 1;
    int second = 2;
    
    swap_pointers(&first, &second);
    
    printf("%d, %d\n", first, second);
    return 0;
}

// swap the values in two integers, given as pointers
void swap_pointers(int *a, int *b) {
    int temp = *b;
    *b = *a;
    *a = temp;
}
