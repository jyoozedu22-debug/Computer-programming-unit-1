#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    // Prompt the user to enter a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Validate input to ensure it's a positive integer
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Exit with an error code
    }

    // Use a while loop to iterate from 1 to n
    while (i <= n) {
        sum = sum + i; // Add the current number to the sum
        i++;           // Increment the counter
    }

    // Display the calculated sum
    printf("Sum of the first %d natural numbers is: %d\n", n, sum);

    return 0; // Indicate successful execution
}