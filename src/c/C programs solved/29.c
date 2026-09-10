#include <stdio.h>

/* Assumption: series is 1 + 1/2 + 1/3 + ... + 1/N */
int main(void) {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }
    printf("Sum of series = %.6lf\n", sum);
    return 0;
}
