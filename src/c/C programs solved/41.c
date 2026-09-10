#include <stdio.h>

static int digit_sum(int n) {
    int sum = 0;
    if (n < 0) n = -n;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(void) {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if (n == 0) {
        printf("Condensed digit = 0\n");
        return 0;
    }
    while (n >= 10 || n <= -10) {
        n = digit_sum(n);
    }
    printf("Condensed digit = %d\n", n < 0 ? -n : n);
    return 0;
}
