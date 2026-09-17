//Simple calculator (+, −, ×, ÷) using if-else

#include <stdio.h>
int main() {
    double a, b, result;
    char op;
    printf("Enter first number, operator (+,-,*,/), second number: ");
    scanf("%lf %c %lf", &a, &op, &b);
    if (op == '+')
        result = a + b;
    else if (op == '-')
        result = a - b;
    else if (op == '*')
        result = a * b;
    else if (op == '/') {
        if (b == 0) {
            printf("Error: Division by zero\n");
            return 0;
        }
        result = a / b;
    } else {
        printf("Invalid operator\n");
        return 0;
    }
    printf("Result = %.2f\n", result);
    return 0;
}