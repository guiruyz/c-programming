#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    printf("Type an entire number: ");
    scanf("%d", &num);
    if (numero % 2 == 0 && numero % 3 == 0) {
        printf("%d It's divisive by 2 and 3\n", numero);
    } else {
        printf("%d It's not divisive by 2 and 3\n", numero);
        }
    return 0;
}