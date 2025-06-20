#include <stdio.h> 

int main() {
    char operator; 
    double num1, num2, result; 

    printf("Welcome to the  Calculator!\n");
    printf("Enter an operator (+, -, *, /): ");
    
    scanf(" %c", &operator);

    printf("Enter the first number: ");
    scanf("%lf", &num1); 

    printf("Enter the second number: ");
    scanf("%lf", &num2); 

    
    if (operator == '+') {
        result = num1 + num2;
    } else if (operator == '-') {
        result = num1 - num2;
    } else if (operator == '*') {
        result = num1 * num2;
    } else if (operator == '/') {
        if (num2 != 0) {
            result = num1 / num2;
        } else {
            printf("Error: Cannot divide by zero!\n");
            return 0; 
        }
    } else {
        printf("Error: Invalid operator entered.\n");
        return 0; 
    }
    
    printf("Result: %.2lf\n", result);

    return 0; 
}