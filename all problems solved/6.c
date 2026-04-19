#include <stdio.h>

int main(void) {
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Largest = %.2lf\n", (a > b) ? a : b);
    return 0;
}
