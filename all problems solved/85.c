#include <stdio.h>

long long decimal_to_binary(int n) {
    if (n == 0) return 0;
    long long bin = 0, place = 1;
    int x = n;
    if (x < 0) x = -x;
    while (x > 0) {
        bin += (x % 2) * place;
        x /= 2;
        place *= 10;
    }
    return bin;
}

int main(void) {
    int n;
    printf("Enter decimal number: ");
    scanf("%d", &n);
    printf("Binary = %lld\n", decimal_to_binary(n));
    return 0;
}
