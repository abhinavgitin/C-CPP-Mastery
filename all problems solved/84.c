#include <stdio.h>

int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void c_prime(int low, int high) {
    for (int i = low; i <= high; i++) {
        if (is_prime(i)) printf("%d ", i);
    }
    printf("\n");
}

int main(void) {
    int l, h;
    printf("Enter range (low high): ");
    scanf("%d %d", &l, &h);
    c_prime(l, h);
    return 0;
}
