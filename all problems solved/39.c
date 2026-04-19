#include <stdio.h>

int main(void) {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if (n == 0) {
        printf("Digits = 1\n");
        return 0;
    }
    if (n < 0) n = -n;
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    printf("Digits = %d\n", count);
    return 0;
}
