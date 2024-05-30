// i had no clue what this was and followed the lecture, so likely the code will be the same

// This simple program demonstrates enums and the 
// syntax for using them
// Enums allow us to represent nominal data, 
// that is data that has a finite set of variants, which 
// are not in order 

#include <stdio.h>
enum weekdays {MON,TUE,WED,THU,FRI,SAT,SUN};


int main(void){

    enum weekdays days;
    days = WED;

    printf("The day of the week is %d\n", days);

}