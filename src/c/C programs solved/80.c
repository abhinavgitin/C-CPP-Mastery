#include <stdio.h>

double add(double a, double b) { return a + b; }
double sub(double a, double b) { return a - b; }
double mul(double a, double b) { return a * b; }
double divide(double a, double b) { return (b == 0) ? 0 : (a / b); }
double power(double a, int e) {
    double ans = 1.0;
    int n = e < 0 ? -e : e;
    for (int i = 0; i < n; i++) ans *= a;
    return e < 0 ? 1.0 / ans : ans;
}

int main(void) {
    int ch;
    double x, y;
    printf("1:+ 2:- 3:* 4:/ 5:power\nChoose: ");
    scanf("%d", &ch);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &x, &y);

    if (ch == 1) printf("Result = %.2lf\n", add(x, y));
    else if (ch == 2) printf("Result = %.2lf\n", sub(x, y));
    else if (ch == 3) printf("Result = %.2lf\n", mul(x, y));
    else if (ch == 4) {
        if (y == 0) printf("Division by zero not allowed\n");
        else printf("Result = %.2lf\n", divide(x, y));
    } else if (ch == 5) {
        printf("Result = %.2lf\n", power(x, (int)y));
    } else {
        printf("Invalid choice\n");
    }
    return 0;
}
