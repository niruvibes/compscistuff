// z5592479 Neil THarol 11th july 2024


#include <stdio.h>
#include <string.h>

#define MAX 128

int main(void) {
    printf("Enter the search term: ");
    char base[MAX];
    fgets(base, MAX, stdin);
    printf("Enter the list of strings:\n");
    char comp[MAX];
    int i = 0;
    while (fgets(comp, MAX, stdin) != NULL) {
        if (strcmp(base, comp) == 0) {
            i++;
        }
    }
    printf("There was %d occurrence(s) of the search term in the input.\n", i);
    return 0;
}