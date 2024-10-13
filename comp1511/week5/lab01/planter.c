// Name of Exercise
// name.c
//
// This program was written by YOUR-NEIL THAROL-HERE (z5592479)
// on INSERT-29/06/24-HERE
//
// One line summary of what this exercise does. ion know

/*

*/
#include <stdio.h>

#define GARDEN_ROWS 5
#define GARDEN_COLS 5
#define TRUE 1
#define FALSE 0

/*
Provided enum flowers
DO NOT MODIFY THIS ENUM
*/
enum flowers {
    EMPTY,
    DAISY,
    ROSE,
    TULIP
};

/*
Provided struct garden 
DO NOT MODIFY THIS STRUCT
*/
struct garden {
    enum flowers flower;
    int bloom_countdown;
    int is_gardener;
};

/*
provided function prototypes
DO NOT MODIFY THESE FUNCTION PROTOTYPES
*/
void print_garden(struct garden garden[GARDEN_ROWS][GARDEN_COLS]);
int grow_garden(struct garden garden[GARDEN_ROWS][GARDEN_COLS]);

int main(void) {
    struct garden garden[GARDEN_ROWS][GARDEN_COLS];

    printf("Welcome to the planter!\n");
    for (int i = 0; i < GARDEN_ROWS; i++) {
        for (int j = 0; j < GARDEN_COLS; j++) {
            garden[i][j].flower = EMPTY;
            garden[i][j].bloom_countdown = -1;
            garden[i][j].is_gardener = 0;
        }
    }
    garden[0][0].is_gardener = 1;
    // TODO SECOND: IMPLEMENT THE MAIN FUNCTION

    int type, i = 0;
    print_garden(garden);
    while (i < 5) {
        // Provided printf statements to help you get started
        printf(
            "0. Nothing\n"
            "1. Daisy\n"
            "2. Rose\n"
            "3. Tulip\n"
            "Which Flower would you like to plant in this row? "
        );
        scanf(" %d", &type);
        for (int j = 0; j < GARDEN_COLS; j++) {
            if (type == 0) {
                
            } else if (type == 1) {
                garden[i][j].flower = DAISY;
                garden[i][j].bloom_countdown = 3;
            } else if (type == 2) {
                garden[i][j].flower = ROSE;
                garden[i][j].bloom_countdown = 3;
            } else if (type == 3) {
                garden[i][j].flower = TULIP;
                garden[i][j].bloom_countdown = 3;
            } else {
                i--;
                garden[i][j].bloom_countdown = 0;
            }
        }
        garden[i][0].is_gardener = 0;
        i++;
        if (i != 5) {
            garden[i][0].is_gardener = 1;
        }
        print_garden(garden);
        grow_garden(garden);
        // for (int k = 0; k < GARDEN_ROWS; k++) {
        //     printf("%d,", garden[0][k].bloom_countdown);
        // }
    }
    // TODO, this condition cluster is wrong
    // TODO doesnt allow for . lines
    
    while (garden[0][0].bloom_countdown > -1|| 
            garden[1][1].bloom_countdown > -1 || 
            garden[2][2].bloom_countdown > -1 || 
            garden[3][3].bloom_countdown > -1 ||
            garden[4][4].bloom_countdown > -1) {
        printf("Waiting for flowers to bloom... \n");
        print_garden(garden);
        grow_garden(garden);
        // printf("why are u running");
    }
    // for (int k = 0; k < GARDEN_ROWS; k++) {
    //     printf("%d,", garden[0][k].bloom_countdown);
    // }
    return 0;
}

// int checker(int y, struct garden garden[GARDEN_ROWS][GARDEN_COLS]) {
//     if (garden[0][y].bloom_countdown == ) {

//     }
// }

/*
    Decreases the bloom_countdown for all flowers in the garden
    Parameters:
        garden: a 2D array of struct garden
    Returns:
        int: returns 1 if a flower has grown, 0 otherwise
*/
// ! this function redcuded all of them not jsut the ones 
// ! with flowers for some reason
// * fixed
int grow_garden(struct garden garden[GARDEN_ROWS][GARDEN_COLS]) {
    // TODO FIRST: decrease bloom_countdown for all flowers in the garden
    for (int j = 0; j < GARDEN_ROWS; j++) {
        for (int i = 0; i < GARDEN_COLS; i++) {
            if (garden[i][j].flower != EMPTY) {
                garden[i][j].bloom_countdown--;
            }
        }
    }
    return FALSE;
}


////////////////////////////////////////////////////////////////////////////////
//////////////////// DO NOT MODIFY ANYTHING BELOW THIS LINE ////////////////////
////////////////////////////////////////////////////////////////////////////////

/*
    Prints the garden to the terminal
    Parameters:
        garden: a 2D array of struct garden
    Returns:
        void
*/
void print_garden(struct garden garden[GARDEN_ROWS][GARDEN_COLS]) {
    printf("\n");
    for (int i = 0; i < GARDEN_ROWS; i++) {
        for (int j = 0; j < GARDEN_COLS; j++) {
            if (garden[i][j].is_gardener) {
                printf("# ");
            } else if (garden[i][j].flower == EMPTY) {
                printf(". ");
            } else if (garden[i][j].bloom_countdown > 0) {
                printf("%d ", garden[i][j].bloom_countdown);
            } else if (garden[i][j].flower == DAISY) {
                printf("D ");
            } else if (garden[i][j].flower == ROSE) {
                printf("R ");
            } else if (garden[i][j].flower == TULIP) {
                printf("T ");
            } else {
                printf(". ");
            }
        }
        printf("\n");
    }
    printf("\n");
}
