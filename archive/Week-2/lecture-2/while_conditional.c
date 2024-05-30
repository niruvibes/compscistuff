#include <stdio.h>

int main(void){
    //declare varialbe 
    int hours = 0;
    char answer = 'n';
    //first hour
    printf("Did you get your ticket? ");
    scanf(" %c", &answer);
    hours += 1;
    while (answer != 'y'){
        //first hour
        printf("Did you get your ticket? ");
        scanf(" %c", &answer);
        hours += 1;
    }
    printf("waited for %d hours \n", hours);

    return 0;
}