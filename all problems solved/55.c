#include <stdio.h>

static int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main(void) {
    int n, arr[200];
    printf("Enter size: ");
    scanf("%d", &n);
    if (n <= 0 || n > 200) return 0;
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Prime elements: ");
    for (int i = 0; i < n; i++) if (is_prime(arr[i])) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
