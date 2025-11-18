#include <stdio.h>

int main() {
    // Integer data types
    int int_var = 10;
    short short_var = 20;
    long long_var = 30L;
    long long long_long_var = 40LL;
    unsigned int unsigned_int_var = 50U;

    // Floating-point data types
    float float_var = 12.34f;
    double double_var = 56.78;
    long double long_double_var = 90.123L;

    // Character data type
    char char_var = 'A';

    // String (array of characters)
    char string_var[] = "Hello C!";

    // Boolean (represented by int in C)
    _Bool bool_var = 1; // 1 for true, 0 for false

    printf("Displaying various data types:\n");

    printf("Integer (int): %d\n", int_var);
    printf("Short Integer (short): %hd\n", short_var);
    printf("Long Integer (long): %ld\n", long_var);
    printf("Long Long Integer (long long): %lld\n", long_long_var);
    printf("Unsigned Integer (unsigned int): %u\n", unsigned_int_var);

    printf("Float (float): %f\n", float_var);
    printf("Double (double): %lf\n", double_var);
    printf("Long Double (long double): %Lf\n", long_double_var);

    printf("Character (char): %c\n", char_var);
    printf("String (char array): %s\n", string_var);

    printf("Boolean (_Bool, 1 for true): %d\n", bool_var);

    return 0;
}