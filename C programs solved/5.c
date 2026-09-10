#include <stdio.h>

int main(void) {
    double a, b, c, d, e;
    printf("Enter 5 numbers: ");
    scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &e);
    double sum = a + b + c + d + e;
    printf("Sum = %.2lf\nAverage = %.2lf\n", sum, sum / 5.0);
    return 0;
}
