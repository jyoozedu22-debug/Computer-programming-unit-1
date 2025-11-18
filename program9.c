#include <stdio.h>

int main() {
    int totalMarks;
    char grade;

    // Prompt user for total marks
    printf("Enter the total marks obtained by the student (out of 100): ");
    scanf("%d", &totalMarks);

    // Validate input marks
    if (totalMarks < 0 || totalMarks > 100) {
        printf("Invalid marks entered. Marks should be between 0 and 100.\n");
        return 1; // Exit with an error code
    }

    // Determine grade based on marks
    if (totalMarks >= 90) {
        grade = 'A';
    } else if (totalMarks >= 80) {
        grade = 'B';
    } else if (totalMarks >= 70) {
        grade = 'C';
    } else if (totalMarks >= 60) {
        grade = 'D';
    } else {
        grade = 'F'; // Fail
    }

    // Display grade and pass/fail status
    printf("Student Grade: %c\n", grade);

    if (grade == 'F') {
        printf("Result: Fail\n");
    } else {
        printf("Result: Pass\n");
    }

    return 0; // Exit successfully
}