#include <stdio.h>

int main() {
    int n; // Variable to store the user-defined upper limit
    int sum = 0; // Variable to store the sum, initialized to 0
    int i = 1; // Counter variable, initialized to 1 for natural numbers

    // Prompt the user to enter the value of n
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    // Validate input to ensure n is positive
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Indicate an error
    }

    // Do-while loop to calculate the sum
    do {
        sum += i; // Add the current value of 'i' to 'sum'
        i++;      // Increment 'i' for the next iteration
    } while (i <= n); // Continue as long as 'i' is less than or equal to 'n'

    // Print the calculated sum
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0; // Indicate successful execution
}