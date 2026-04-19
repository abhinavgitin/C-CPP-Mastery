#include <stdio.h>

int main(void) {
    double p, r;
    int t;
    printf("Enter principal, annual rate, years: ");
    scanf("%lf %lf %d", &p, &r, &t);
    double amount = p;
    for (int i = 0; i < t; i++) {
        amount *= (1.0 + r / 100.0);
    }
    printf("Compound Interest = %.2lf\n", amount - p);
    printf("Amount = %.2lf\n", amount);
    return 0;
}
