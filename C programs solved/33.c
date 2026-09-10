#include <stdio.h>

int main(void) {
    int n;
    printf("Enter decimal number: ");
    scanf("%d", &n);
    if (n == 0) {
        printf("Binary = 0\n");
        return 0;
    }
    int bits[64], idx = 0;
    int x = n;
    if (x < 0) x = -x;
    while (x > 0) {
        bits[idx++] = x % 2;
        x /= 2;
    }
    printf("Binary = ");
    for (int i = idx - 1; i >= 0; i--) printf("%d", bits[i]);
    printf("\n");
    return 0;
}
