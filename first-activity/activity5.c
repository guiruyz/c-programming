#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    printf("Type an entire number: ");
    scanf("%d", &num);
    if (num % 2 == 0 && num % 3 == 0 && num % 5 != 0) {
        printf("%d It's divisive by 2 and 3, but is not divisive by 5\n", num);
    } else {
        printf("%d It does not meet specifications\n", num);
        }
    return 0;
}