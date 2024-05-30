/* Problem: Print out a grid of numbers that looks like this: 

1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5

*/
// #define square 5

// #include <stdio.h>
// int main(void){
//     int i = 0;
//     int j = 0;

//     while (j <= square){
//         i = 1;
//         while (i <= square){
//             printf("%d ", i);
//             i += 1;
//         }
//         printf("\n");
//         j += 1;
//     }
// }

// Part two, make the size of the square, inputtable

#include <stdio.h>
int main(void){
    int i = 0;
    int j = 0;
    int square;

    printf("choose a grid size: ");
    scanf("%d", &square);

    while (j <= square){
        i = 1;
        while (i <= square){
            printf("%d ", i);
            i += 1;
        }
        printf("\n");
        j += 1;
    }
}