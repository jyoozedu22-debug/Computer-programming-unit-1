#include <stdio.h>

int main() {
    int age = 20;
    char* eligibility_message;

    // Using the conditional operator to determine voting eligibility
    eligibility_message = (age >= 18) ? "You are eligible to vote." : "You are not eligible to vote.";

    printf("%s\n", eligibility_message);

    // Another example: finding the maximum of two numbers
    int num1 = 10, num2 = 25;
    int max_value = (num1 > num2) ? num1 : num2;

    printf("The maximum value between %d and %d is: %d\n", num1, num2, max_value);

    return 0;
}