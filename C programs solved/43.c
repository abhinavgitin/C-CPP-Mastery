#include <stdio.h>

int main(void) {
    int n;
    long long a = 0, b = 1;
    printf("Enter N terms: ");
    scanf("%d", &n);
    printf("Fibonacci series: ");
    for (int i = 0; i < n; i++) {
        printf("%lld ", a);
        long long next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
    return 0;
}
