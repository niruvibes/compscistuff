// assign varialbes and allat

#include <stdio.h>

//constants are defined outside of the main
#define PI 3.14

int main(void){
    double number;
    number = 6;
    printf("The variable number is %lf \n", number);
    
    double number_two = 4;
    printf("The second variable number is %lf \n", number_two);

    double answer = number * number_two;
    printf("The product of %lf and %lf is %lf\n", number, number_two, answer);
    // The math can also be done in the printf if u want to do so
    printf("The difference of %lf and %lf is %lf\n", number, number_two, number-number_two);

    printf("The division of %lf and %lf is %lf\n", number, number_two, number/number_two);

    // The % (modulus operator) will give the remainder, however this only works with int not double/lf
    // printf("The remainder in the division of %lf and %lf is %lf\n",number, number_two, number%number_two);
    
    //math follows bodmas so yay
    printf("The rsult of %lf added to %lf is then multiplied by %lf, giving: %lf\n",number,number_two,number_two,(number+number_two)*number_two);

    //math can also be done on characters
    char character = 'a';
    char character_two = 'b';
    //the math adds the ascii values and then returns the character with the resultant code
    printf("The character %c + %c is: %c\n",character,character_two, character+character_two);

    return 0;
}