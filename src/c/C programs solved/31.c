#include <stdio.h>

int main(void) {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if (n < 0) n = -n;
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    printf("Sum of digits = %d\n", sum);
    return 0;
}
