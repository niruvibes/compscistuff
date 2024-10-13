// stellar_information.c
//
// This program simulates a star system in space
//
// Written by Neil tharol z5592479
// on 12/07/24

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CONVERSION_CONSTANT 9.461e12
#define LIGHT_SPEED 299792.458

#define MAX_LENGTH 50

// TODO: TASK 1

struct star {
    char name[MAX_LENGTH];
    double distance;
    char spectral_type;
};

void print_star_information(struct star *star);
void input_star_information(struct star *star);
double time_travel(struct star *star);

int main() {
    struct star star;
    struct star *star_ptr = &star;

    input_star_information(star_ptr);
    print_star_information(star_ptr);

    return 0;
}

// Takes in the stars information
void input_star_information(struct star *star) {
    printf("Enter the star's name: ");
    fgets(star->name, sizeof(star->name), stdin);

    printf("Enter the star's distance from Earth (in light-years): ");
    scanf(" %lf", &star->distance);

    printf("Enter the star's spectral type: ");
    scanf(" %c", &star->spectral_type);
}

// Estimate travel time from Earth to the star based on star's distance
double time_travel(struct star *star) {
    double travel;
    double travel_distance;
    
    travel_distance = star->distance * CONVERSION_CONSTANT;
    travel = travel_distance / LIGHT_SPEED;

    return travel;
}

// Prints the stars information
void print_star_information(struct star *star) {
    printf("\nStar's Information:\n");
    printf("Name: %s", star->name);
    printf("Distance: %lf light-years\n", star->distance);
    printf("Spectral Type: %c\n", star->spectral_type);
    printf("Estimated travel time from Earth: %.2lf seconds\n", time_travel(star));
}
