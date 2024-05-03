// assign varialbes and allat

#include <stdio.h>

int main(void){

    // Declare a variable of type int
    // First state the type of varialbe - int, double or char
    int number;
    // now assign a value
    number = 13;
    // Lets print this using a format specifier - %d (int)
    printf("The variable number is %d \n", number);
    
    // This can be done in one line 
    int number_two = 42;
    printf("The second variable number is %d \n", number_two);

    // They can printed at the same time by listing in order
    printf("The first variable is %d, and the second is %d \n", number, number_two);

    // Declar variable and initialsie char
    char character = 's';
    printf("The characters ascii number is %d \n", character);
    printf("The character is %c \n", character); //%c is the character format specifier

    // declar variable and initislise deciminal point
    double decimial = 3.14;
    printf("The decimial is %.2lf \n", decimial);

    return 0;
}