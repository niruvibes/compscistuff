//
// z5592479 Neil Tharol

#include<stdio.h>

int main(void){

    int layercount;
    int i = 0;
    int z = 0;
    char layers[10];

    printf("How many layers: ");
    scanf(" %d", &layercount);

    printf("Please enter layers: ");
    scanf("%s", layers);

    while (z < layercount){
        while (i < layercount){
            printf("%c", layers[z]);
            i++;
        }
        printf("\n");
        i = 0;
        z++;
    }   

    // printf("%c\n", layers[0]);
    // printf("%c\n", layers[1]);
}