//s something about vectors im not sure
// z5592479 NEIL THAROL

#include <stdio.h>

struct vector {
    int vector_x;
    int vector_y;
    int vector_z;
};

int main(void) {

    //////////////// DO NOT CHANGE ANY OF THE CODE BELOW HERE //////////////////
    struct vector first_vector;
    struct vector second_vector;

    // Scans in vector values from user
    // Carefully read how these scanf's work ~ Try to understand it
    printf("Please enter the values of the first vector (x, y, z): ");
    scanf("%d %d %d", &first_vector.vector_x, &first_vector.vector_y,
        &first_vector.vector_z);

    printf("Please enter the values of the second vector (x, y, z): ");
    scanf("%d %d %d", &second_vector.vector_x, &second_vector.vector_y,
        &second_vector.vector_z);

    struct vector sum_vector;
    //////////////// DO NOT CHANGE ANY OF THE CODE ABOVE HERE //////////////////

    ////////////////////////////////////////////////////////////////////////////
    ///////////////////// ONLY WRITE CODE BELOW HERE ///////////////////////////
    ////////////////////////////////////////////////////////////////////////////

    // TODO: Fill in `sum_vector` by adding each component of `first_vector`
    // and `second_vector`
    sum_vector.vector_x = first_vector.vector_x + second_vector.vector_x;
    sum_vector.vector_y = first_vector.vector_y + second_vector.vector_y;
    sum_vector.vector_z = first_vector.vector_z + second_vector.vector_z;
    
    ////////////////////////////////////////////////////////////////////////////
    ///////////////////// ONLY WRITE CODE ABOVE HERE ///////////////////////////
    ////////////////////////////////////////////////////////////////////////////

    printf("The resulting sum vector is:\n");
    printf("x: %d\n", sum_vector.vector_x);
    printf("y: %d\n", sum_vector.vector_y);
    printf("z: %d\n", sum_vector.vector_z);
    return 0;
}
