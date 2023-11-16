#include <stdio.h>

int main() {
    int finalGrade;

    printf("Enter your final grade (between 0 and 100): ");
    scanf("%d", &finalGrade);
    if (finalGrade >= 90 && finalGrade <= 100) {
        printf("Your grade is A\n");
    } else if (finalGrade >= 75 && finalGrade <= 89) {
        printf("Your grade is B\n");
    } else if (finalGrade >= 55 && finalGrade <= 74) {
        printf("Your grade is C\n");
    } else if (finalGrade >= 45 && finalGrade <= 54) {
        printf("Your grade is D\n");
    } else if (finalGrade >= 0 && finalGrade <= 44) {
        printf("Your grade is F\n");
    } else {
        printf("Invalid grade entered. Please enter a grade between 0 and 100\n");
    }

    return 0;
}
