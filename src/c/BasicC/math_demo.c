#include <stdio.h>
#include <math.h>

int main() {
    double number, power;

    printf("Enter a number: ");
    scanf("%lf", &number);

    printf("Enter power to raise it to: ");
    scanf("%lf", &power);

    double result_pow = pow(number, power);   // needs -lm
    double result_sqrt = sqrt(number);        // needs -lm

    printf("\n%.2lf raised to %.2lf = %.2lf\n", number, power, result_pow);
    printf("Square root of %.2lf = %.2lf\n", number, result_sqrt);

    return 0;
}
