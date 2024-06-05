// something about division
// z5592479 Neil Tharol

#include <stdio.h>

int main(void) {

    double dividend;
    double divisor;
    double calc;

    printf("Enter the dividend: ");
    scanf(" %lf", &dividend);
    printf("Enter the divisor: ");
    scanf(" %lf", &divisor);
    if (divisor == 0) {
        printf("Don't be silly!\n");
        return 1;
    } else {
        printf("%.0lf divided by %.0lf\n", dividend, divisor);

        calc = dividend / divisor;
        
        printf("To the nearest integer: %.0lf\n", calc);
        printf("To 1 decimal place: %.1lf\n", calc);
        printf("To 5 decimal places: %.5lf\n", calc);
        printf("To 20 decimal places: %.20lf\n", calc);
    }

    return 0;
}
