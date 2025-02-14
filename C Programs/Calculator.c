#include<stdio.h>

double add(double a, double b);

double subtract(double a, double b);

double multiply(double a, double b);

double divide(double a, double b);

int main() {
    double num1, num2;
    char operator;
    printf("Enter 2 numbers : ");
    scanf("%lf%lf", &num1, &num2);

    printf("Enter the operation: ");
    scanf(" %c", &operator);

    switch(operator) {
        case '+' : printf("Result is: %f", add(num1, num2));
                    break;
        case '-' : printf("Result is: %f", subtract(num1, num2));
                    break;
        case '*' : printf("Result is: %f", multiply(num1, num2));
                    break;
        case '/' : printf("Result is: %f", divide(num1, num2));
                    break;
    }

    return 0;

}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}