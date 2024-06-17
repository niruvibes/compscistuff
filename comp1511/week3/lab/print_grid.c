//
// z5592479 Neil Tharol

#include<stdio.h>

int main(void){
    
    int grid;
    int column = 0;
    int row = 0;

    printf("Enter size: ");
    scanf(" %d", &grid);

    while (row < grid) {
        while (column < grid) {
            printf("(%d, %d) ", row, column++);
        }
        printf("\n");
        column = 0;
        row++;
    }

}