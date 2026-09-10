#include <stdio.h>

static double ipow(double base, int exp) {
    double ans = 1.0;
    int e = exp < 0 ? -exp : exp;
    for (int i = 0; i < e; i++) ans *= base;
    return exp < 0 ? 1.0 / ans : ans;
}

int main(void) {
    int op;
    double a, b;
    printf("1:+ 2:- 3:* 4:/ 5:power\nChoose operation: ");
    scanf("%d", &op);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    switch (op) {
        case 1: printf("Result = %.2lf\n", a + b); break;
        case 2: printf("Result = %.2lf\n", a - b); break;
        case 3: printf("Result = %.2lf\n", a * b); break;
        case 4:
            if (b == 0) printf("Division by zero not allowed.\n");
            else printf("Result = %.2lf\n", a / b);
            break;
        case 5: printf("Result = %.2lf\n", ipow(a, (int)b)); break;
        default: printf("Invalid choice.\n");
    }
    return 0;
}
