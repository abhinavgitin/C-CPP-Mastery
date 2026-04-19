#include <stdio.h>

long long sum_natural(int n) {
    if (n <= 0) return 0;
    return n + sum_natural(n - 1);
}

int main(void) {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    printf("Sum = %lld\n", sum_natural(n));
    return 0;
}
