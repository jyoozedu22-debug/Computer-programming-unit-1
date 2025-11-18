#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1 > 0) { // Outer if: checks if the first number is positive
        printf("The first number (%d) is positive.\n", num1);
        if (num2 > 0) { // Inner if: checks if the second number is positive
            printf("The second number (%d) is also positive.\n", num2);
        } else if (num2 < 0) {
            printf("The second number (%d) is negative.\n", num2);
        } else {
            printf("The second number (%d) is zero.\n", num2);
        }
    } else if (num1 < 0) { // Outer else if: checks if the first number is negative
        printf("The first number (%d) is negative.\n", num1);
        if (num2 > 0) {
            printf("The second number (%d) is positive.\n", num2);
        } else if (num2 < 0) {
            printf("The second number (%d) is also negative.\n", num2);
        } else {
            printf("The second number (%d) is zero.\n", num2);
        }
    } else { // Outer else: the first number is zero
        printf("The first number (%d) is zero.\n", num1);
        if (num2 > 0) {
            printf("The second number (%d) is positive.\n", num2);
        } else if (num2 < 0) {
            printf("The second number (%d) is negative.\n", num2);
        } else {
            printf("The second number (%d) is also zero.\n", num2);
        }
    }

    return 0;
}