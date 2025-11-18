#include <stdio.h> // Required for scanf() and printf()

int main() {
    int integer_data;
    float float_data;
    double double_data;
    char character_data;

    // Input integer
    printf("Enter an integer: ");
    scanf("%d", &integer_data);

    // Input float
    printf("Enter a float: ");
    scanf("%f", &float_data);

    // Input double
    printf("Enter a double: ");
    scanf("%lf", &double_data); // Use %lf for double

    // Input character
    printf("Enter a character: ");
    scanf(" %c", &character_data); // Space before %c to consume any leftover newline character

    // Display the entered data
    printf("\nYou entered:\n");
    printf("Integer: %d\n", integer_data);
    printf("Float: %f\n", float_data);
    printf("Double: %lf\n", double_data);
    printf("Character: %c\n", character_data);

    return 0;
}