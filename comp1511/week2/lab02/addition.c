// sum together the no of students and tutors
// z5592479 Neil Tharol
#include <stdio.h>

int main(void) {
    int students;
    int tutors;
    printf("Please enter the number of students and tutors: ");
    scanf(" %d %d", &students, &tutors);
    printf("%d + %d = %d\n", students, tutors, students + tutors);
}