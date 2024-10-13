// A simpler version of the famous Snake game!
//
// Written by Rory Golledge (z5308772) on 3/3/23
// Modified by YOUR-Neil Tharol (z5592479) 29th 6th 24
//

#include <stdio.h>

#define SIZE 8

enum land {
    NOT_VISITED,
    VISITED,
    SNAKE,
    APPLE
};

void initialise_map(enum land map[SIZE][SIZE]);
void print_map(enum land map[SIZE][SIZE]);

int main(void) {
    enum land map[SIZE][SIZE];
    initialise_map(map);

    printf("Welcome to Snake!\n");

    // TODO: Complete the program
    int x, y;
    printf("Please enter apple location: ");
    scanf(" %d %d", &x, &y);
    map[x][y] = APPLE;
    int og_x = x, og_y = y;

    printf("Please enter snake location: ");
    scanf(" %d %d", &x, &y);
    map[x][y] = SNAKE;

    print_map(map);

    while (map[og_x][og_y] != SNAKE) {
        char dir;
        scanf(" %c", &dir);
        if (dir == 'r') {
            map[x][y] = VISITED;
            y++;
            map[x][y] = SNAKE;
        } else if (dir == 'l') {
            map[x][y] = VISITED;
            y--;
            map[x][y] = SNAKE;
        } else if (dir == 'u') {
            map[x][y] = VISITED;
            x--;
            map[x][y] = SNAKE;
        } else if (dir == 'd') {
            map[x][y] = VISITED;
            x++;
            map[x][y] = SNAKE;
        }
        print_map(map);
    }
    printf("Chomp!\n");

    return 0;
}

/**
 * Initialises the given `map` such that all tiles are `NOT_VISITED`
 * 
 * Parameters:
 *     map - The map to initialise
 * 
 * Returns:
 *     Nothing
 */
void initialise_map(enum land map[SIZE][SIZE]) {
    for (int row = 0; row < SIZE; ++row) {
        for (int col = 0; col < SIZE; ++col) {
            map[row][col] = NOT_VISITED;
        }
    }
}

/**
 * Prints the given `map` such that all enum values are printed as nice
 * characters.
 * 
 * Parameters:
 *     map - The map to print out
 * 
 * Returns:
 *     Nothing
 */
void print_map(enum land map[SIZE][SIZE]) {
    for (int row = 0; row < SIZE; ++row) {
        for (int col = 0; col < SIZE; ++col) {
            if (map[row][col] == NOT_VISITED) {
                printf(". ");
            } else if (map[row][col] == VISITED) {
                printf("- ");
            } else if (map[row][col] == SNAKE) {
                printf("S ");
            } else if (map[row][col] == APPLE) {
                printf("A ");
            }
        }
        printf("\n");
    }
}
