#include <stdio.h>

int main() {
    int a,b;
    char operation;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter an operation (+, -, *, /): ");
    scanf(" %c", &operation);

    switch (operation) {
        case '+':
            printf("%d + %d = %d\n", a, b, a + b);
            break;
        case '-':
            printf("%d - %d = %d\n", a, b, a - b);
            break;
        case '*':
            printf("%d * %d = %d\n", a, b, a * b);
            break;
        case '/':
            if (b != 0) {
                printf("%d / %d = %.2f\n", a, b, (float)a / b);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operation.\n");
    }

    return 0;
}