#include <stdio.h>

unsigned long long factorial(int n) {
    if (n <= 1) return 1;
    return (unsigned long long)n * factorial(n - 1);
}

int main(void) {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Factorial undefined for negative numbers.\n");
        return 0;
    }
    printf("Factorial = %llu\n", factorial(n));
    return 0;
}
