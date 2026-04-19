#include <stdio.h>

int main(void) {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    long long sum = 1LL * n * (n + 1) / 2;
    printf("Sum = %lld\n", sum);
    return 0;
}
