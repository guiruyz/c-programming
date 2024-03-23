#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    printf("Type an entire number: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("%d It's divisive by 2\n", num);
    } else {
        printf("%d It's not divisive by 2\n", num);
        }
    return 0;
}