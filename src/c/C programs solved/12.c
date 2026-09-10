#include <stdio.h>

int main(void) {
    double p, r, t;
    printf("Enter principal, rate, time: ");
    scanf("%lf %lf %lf", &p, &r, &t);
    printf("Simple Interest = %.2lf\n", (p * r * t) / 100.0);
    return 0;
}
