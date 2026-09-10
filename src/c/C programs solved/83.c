#include <stdio.h>

double c_power(double base, int exponent) {
    double ans = 1.0;
    int e = exponent < 0 ? -exponent : exponent;
    for (int i = 0; i < e; i++) ans *= base;
    return exponent < 0 ? 1.0 / ans : ans;
}

int main(void) {
    double base;
    int exponent;
    printf("Enter base and exponent: ");
    scanf("%lf %d", &base, &exponent);
    printf("Result = %.6lf\n", c_power(base, exponent));
    return 0;
}
