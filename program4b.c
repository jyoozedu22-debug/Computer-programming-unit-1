#include <stdio.h>

int main() {
    int age;

    // Prompt the user to enter their age
    printf("Enter your age: ");

    // Read the age entered by the user
    scanf("%d", &age);

    // Check if the age meets the voting eligibility criteria (18 or older)
    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
        // Optionally, inform the user how many years until they are eligible
        printf("You will be eligible to vote in %d year(s).\n", 18 - age);
    }

    return 0; // Indicate successful program execution
}