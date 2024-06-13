// fighting streets
// streetfighter.c
//
// This program was written by YOUR-NAME-HERE (z5592479)
// on 6/06/24
//
// One line summary of what this exercise does.
// mahorage please ghelp

#include <stdio.h>

#define MAX_HEALTH 50.0
#define MAX_ATTACK 10

// Provided fighter struct
struct fighter {
    int attack;
    double health;
    char attack_command;
};

int main(void) {
    
    char empty;

    printf("Welcome to Street Fighter!\n");
    printf("\n");
    ////////////////////////////////////////////////////////////////////////////
    ///////////////////////// Fighter 1 Creation ///////////////////////////////
    ////////////////////////////////////////////////////////////////////////////
    struct fighter fighter1;
    struct fighter fighter2;

    // TODO: prompt and scan for fighter1's attack power and command. 
    //       Initialise fighter1's health to MAX_HEALTH
    fighter1.health = MAX_HEALTH;
    printf("Enter Fighter 1's attack power (1-10): ");
    scanf(" %d", &fighter1.attack);
    printf("Enter an ascii character for Fighter 1's attack command: ");
    scanf(" %c", &fighter1.attack_command);
    printf("\n");
    ////////////////////////////////////////////////////////////////////////////
    ///////////////////////// Fighter 2 Creation ///////////////////////////////
    ////////////////////////////////////////////////////////////////////////////

    // TODO: declare fighter2's struct and repeat the above for fighter2
    fighter2.health = MAX_HEALTH;
    printf("Enter Fighter 2's attack power (1-10): ");
    scanf(" %d", &fighter2.attack);
    printf("Enter an ascii character for Fighter 2's attack command: ");
    scanf(" %c", &fighter2.attack_command);

    printf("\nFIGHT!\n\n");
    ////////////////////////////////////////////////////////////////////////////
    //////////////////////////////// Fight Loop ////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////

    // TODO: create a loop until one of the fighters loses all their health
    //       prompt the fighter to attack and print remaining health after 
    //       each round
    while (fighter1.health > 0 && fighter2.health > 0) {
        printf("Fighter 1, press %c to attack: ", fighter1.attack_command);
        scanf(" %c", &empty);
        printf("Fighter 1 attacks!\n");
        if (fighter1.health < (MAX_HEALTH/2)) {
            fighter2.health -= 1.5*fighter1.attack;
        } else {
            fighter2.health -= fighter1.attack;
        }
        printf("Fighter 2, press %c to attack: ", fighter2.attack_command);
        scanf(" %c", &empty);
        printf("Fighter 2 attacks!\n\n");
        if (fighter2.health < (MAX_HEALTH/2)) {
            fighter1.health -= 1.5*fighter2.attack;
        } else {
            fighter1.health -= fighter2.attack;
        }
        printf("Fighter 1's health: %.1lf\n", fighter1.health);
        printf("Fighter 2's health: %.1lf\n", fighter2.health);    
    }
    ////////////////////////////////////////////////////////////////////////////
    ////////////////////////////// Fight Results ///////////////////////////////
    ////////////////////////////////////////////////////////////////////////////

    //  TODO: Print the results of the fight
    printf("\n");
    if (fighter1.health <= 0 && fighter2.health <= 0) {
        printf("It's a draw!\n");
    } else if (fighter1.health <= 0 && fighter2.health > 0) {
        printf("Fighter 2 wins!\n");
    } else if (fighter1.health > 0 && fighter2.health <= 0) {
        printf("Fighter 1 wins!\n");
    }



    printf("GAME OVER\n");
    return 0;
}