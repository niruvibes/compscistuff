// i had no clue what this was and followed the lecture, so likely the code will be the same

// This program demonstrates the use of structs
// Let's use an example of a taytay friendship bracelet, 
// as a continuing ode to Sofia. Each bracelet will store
// information:
// - how many beads there are
// - how many letter beads there are  
// - the length of the string for bracelet in cm
// - the initial of who this bracelet is for

#include <stdio.h>

struct friendship {
    int num_beads;
    int letter_beads;
    double size;
    char initial;
};

int main(void){
    // declare usuage of struct
    // struct struct_name given_name_for_main 
    struct friendship bracelet;

    // assign variables
    // given_name.varname = val
    bracelet.num_beads = 10;
    bracelet.letter_beads =5;
    bracelet.size =12.3;
    bracelet.initial = 's';

    // print some of that info
    printf("The bracelet has %d number beads and %d letter beads \n", bracelet.num_beads, bracelet.letter_beads);

    return 0;
    // seems this si for if u have many different section and wanna use same varialbe over multiple sections, but do their value persist

}