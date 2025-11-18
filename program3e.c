#include <stdio.h>

int main() {
    int a = 10, b = 5, c = 15;
    
    // Logical AND
    if (a > b && b < c) {
        printf("Both conditions for AND are true.\n");
    }

    // Logical OR
    if (a == b || c > a) {
        printf("At least one condition for OR is true.\n");
    }

    // Logical NOT
    if (!(a < b)) {
        printf("The NOT condition is true (a is not less than b).\n");
    }

    return 0;
}