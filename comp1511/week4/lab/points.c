// PROGRAM NAME
//
// z5592479 i dont wanna fill out ur template
// Nei atharol
// E

#include <stdio.h>

#define MAX_POINTS 10

struct point {
    // TODO: fill this in so that the struct can hold an x and y position
    double x;
    double y;

    //
    // i.e. This struct should contain:
    //      the x-coordinate and y-coordinate (doubles).
};

// Prints a point out.
void print_point(int point_no, double x, double y);

int main(void) {
    // TODO: Declare an array of points of size MAX_POINTS
    struct point shape[MAX_POINTS];

    printf("How many points in the shape? ");
    // TODO: scan in number of points in the shape
    int num_points;
    scanf(" %d", &num_points);

    printf("Enter points:\n");
    // TODO: scan in the details of each point into the array
    int i = 0;
    while (i < num_points) {
        scanf(" %lf %lf", &shape[i].x, &shape[i].y); 
        i++;
    }

    printf("\nShape Points:\n");
    // TODO: print all the points
    i = 0;
    while (i < num_points) {
        print_point(i + 1, shape[i].x, shape[i].y); 
        i++;
    }

    return 0;
}

//  Prints a single point in the correct format.
//
// Parameters:
// - `point_no` -- The point number
// - `x`        -- The x-coordinate of the point
// - `y`        -- The y-coordinate of the point
//
// Returns: nothing.
void print_point(int point_no, double x, double y) {
    printf("%2d: x = %.3lf, y = %.3lf\n", point_no, x, y);
}