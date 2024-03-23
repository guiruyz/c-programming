#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float a,b,c,delta,x1,x2;

int main() {
    printf("In a quadratic equation, you have ax^2+bx+c.");
    printf("\nThis program is focused on the result of equation, so type 3 numbers, leaving just one space between them. Example:(a b c):");
    scanf(" %f %f %f",&a,&b,&c);
    delta = (b*b-4*a*c);
    if (delta<0) {
        printf ("There is no real solution");
    }
    else {
        x1 = ((-b+(sqrt(delta)))/2*a);
        x2 = ((-b+(sqrt(delta)))/2*a);
        printf("your x1=%f and x2=%f",x1,x2);
    }
    return 0;
}