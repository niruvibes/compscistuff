// assign varialbes and allat

#include <stdio.h>

int main(void){

    // //Lets scan from terminal using the scanf() function
    // //when using scan we only initialise first
    // int answer;
    // int answer_two;

    // printf("Type in a number:");
    // //then in the actual scanf function we assign
    // //the ampersand tells it to go to that memory slot which we initilisialised
    // scanf("%d %d", &answer, &answer_two);
    // printf("the numbers scanned are: %d and, %d\n", answer, answer_two);

    // double decimal_answer;
    // printf("Type in a decimal to scan: ");
    // scanf("%lf", &decimal_answer);
    // printf("The decimal answer is: %lf", decimal_answer);

    char character_answer;
    printf("Type in a character to scan: ");
    scanf(" %c", &character_answer);
    printf("The character answer is: %c\n", character_answer);
}