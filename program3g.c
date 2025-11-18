#include <stdio.h>

int main() {
    int x = 10, y = 20;

    // Using the comma operator in an assignment
    int result = (x += 5, y += 10, x + y);

    printf("x: %d\n", x);
    printf("y: %d\n", y);
    printf("Result: %d\n", result);

    // Using the comma operator in a for loop
    for (int i = 0, j = 5; i < 3; i++, j--) {
        printf("Loop: i = %d, j = %d\n", i, j);
    }

    return 0;
}