#include <stdio.h>

int main() {
    int finalGrade;
    
    printf("Enter your final grade (between 0 and 100): ");
    scanf("%d", &finalGrade);
    if (finalGrade < 45) {
        printf("You failed the course\n");
    } else {
        printf("You passed the course\n");
    }

    return 0;
}
