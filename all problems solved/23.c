#include <stdio.h>

static double c_sqrt(double x) {
    if (x <= 0.0) return 0.0;
    double g = x;
    for (int i = 0; i < 30; i++) {
        g = 0.5 * (g + x / g);
    }
    return g;
}

int main(void) {
    double a, b, c;
    printf("Enter coefficients a b c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0.0) {
        printf("Not a quadratic equation.\n");
        return 0;
    }

    double d = b * b - 4 * a * c;
    if (d > 0) {
        double r1 = (-b + c_sqrt(d)) / (2 * a);
        double r2 = (-b - c_sqrt(d)) / (2 * a);
        printf("Real and distinct roots: %.2lf, %.2lf\n", r1, r2);
    } else if (d == 0) {
        double r = -b / (2 * a);
        printf("Real and equal roots: %.2lf, %.2lf\n", r, r);
    } else {
        double real = -b / (2 * a);
        double imag = c_sqrt(-d) / (2 * a);
        printf("Complex roots: %.2lf + %.2lfi and %.2lf - %.2lfi\n", real, imag, real, imag);
    }
    return 0;
}
