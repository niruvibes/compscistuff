// something about a pyramid
// z5592479 Neil Tharol

#include <stdio.h>

int main(void) {

    int height;
    int i = 1;
    int j = 1;


    printf("how big should the pyramid be?: ");
    scanf(" %d", &height);

    while (i <= height){
        while (j <= i) {
            printf("%d",j);
            j++;
        }
        printf("\n");
        j = 1;
        i++;
    }
}
