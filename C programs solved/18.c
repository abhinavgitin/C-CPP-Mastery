#include <stdio.h>

int main(void) {
    double bs;
    printf("Enter basic salary: ");
    scanf("%lf", &bs);
    double da = 0.40 * bs;
    double hra = 0.20 * bs;
    double gs = bs + da + hra;
    double tax = 0.10 * gs;
    double ns = gs - tax;
    printf("Gross Salary = %.2lf\nNet Salary = %.2lf\n", gs, ns);
    return 0;
}
