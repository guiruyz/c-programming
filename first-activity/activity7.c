#include <stdio.h>
#include <stdlib.h>

float num1, num2, result;

int main() {
    char operacao;
    printf("Type your first number: ");
    scanf("%f", &num1);
    
    printf("Type your second number: ");
    scanf("%f", &num2);
    
    printf("t (+, -, *, /): ");
    scanf(" %c", &operacao); 
    switch(operacao) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Invalid operation\n");
    }
    return 0;
}