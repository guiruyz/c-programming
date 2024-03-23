#include <stdio.h>
#include <stdlib.h>

float num1, num2;

int main() {
    printf("Type first number: ");
    scanf("%f", &num1);
    printf("Type second number: ");
    scanf("%f", &num2);
    if (num1 > num2) {
        printf("%.2f is bigger than %.2f\n", num1, num2);
    } else {
        printf("%.2f isn't bigger than %.2f\n", num1, num2);
    }
}