#include <stdio.h>
#include <stdlib.h>

int day;

int main() {
    printf("Enter the number of the day of the week (1 a 7): ");
    scanf("%d", &day);
    switch(day) {
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Moonday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid day of the week\n");
    }

    return 0;
}