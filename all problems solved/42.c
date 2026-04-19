#include <stdio.h>

int main(void) {
    int n;
    unsigned long long fact = 1;
    printf("Enter number: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Factorial is undefined for negative numbers.\n");
        return 0;
    }
    for (int i = 1; i <= n; i++) fact *= (unsigned long long)i;
    printf("Factorial = %llu\n", fact);
    return 0;
}
