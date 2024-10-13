// kelly is struggling
// z5592479 Nel THarol
// todays date

#include <stdio.h>

int main(void) {

    char instruction;
    int number;

    printf("Enter instruction: ");
    
    while (scanf(" %c %d", &instruction, &number) != EOF) {
        if (instruction == 's') {
            number = number * number;
        } else if (instruction == 'p') {
            int power = 0;
            scanf(" %d", &power);
            int j = 0;
            int ognumber = number;
            while (j < power - 1) {
                number = number * ognumber;
                j++;
            }
        }
        printf("%d\n", number);
        printf("Enter instruction: ");
        number = 0;
    }

    

}