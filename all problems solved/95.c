#include <stdio.h>

int main(void) {
    double a, b;
    double *p1 = &a, *p2 = &b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", p1, p2);
    double sum = *p1 + *p2;
    double avg = sum / 2.0;
    printf("Sum = %.2lf\nAverage = %.2lf\n", sum, avg);
    return 0;
}
