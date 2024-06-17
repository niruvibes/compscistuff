//
// z5592479 Neil Tharol

#include<stdio.h>

int main(void){

    int layercount;
    int width = 0;
    int height = 0;
    char layers[10];

    printf("How many layers: ");
    scanf(" %d", &layercount);

    printf("Please enter layers: ");
    scanf("%s", layers);

    while (height < layercount) {
        while (width < layercount) {
            printf("%c", layers[height]);
            width++;
        }
        printf("\n");
        width = 0;
        height++;
    }   

    // printf("%c\n", layers[0]);
    // printf("%c\n", layers[1]);
}