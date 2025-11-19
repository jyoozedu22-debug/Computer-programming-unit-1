#include <stdio.h>

int main() {
    int integerValue;
    float floatValue;
    double doubleValue;
    char characterValue;
    char stringValue[50]; 


    printf("Enter an integer: ");
    scanf("%d", &integerValue);


    printf("Enter a floating-point number (float): ");
    scanf("%f", &floatValue);


    printf("Enter a double-precision floating-point number (double): ");
    scanf("%lf", &doubleValue);

    printf("Enter a single character: ");
     while (getchar() != '\n'); 
    scanf("%c", &characterValue);

   
    printf("Enter a string (without spaces): ");
    scanf("%s", stringValue); 

    printf("\n--- Displaying Entered Values ---\n");
    printf("Integer: %d\n", integerValue);
    printf("Float: %f\n", floatValue);
    printf("Double: %lf\n", doubleValue);
    printf("Character: %c\n", characterValue);
    printf("String: %s\n", stringValue);

    return 0; 

}
