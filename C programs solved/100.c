#include <stdio.h>

void swap_arrays(int *a, int *b, int n) {
    for (int i = 0; i < n; i++) {
        int t = *(a + i);
        *(a + i) = *(b + i);
        *(b + i) = t;
    }
}

int main(void) {
    int n, a[100], b[100];
    printf("Enter size: ");
    scanf("%d", &n);
    if (n <= 0 || n > 100) return 0;

    printf("Enter first array:\n");
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter second array:\n");
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);

    swap_arrays(a, b, n);

    printf("After swap, first array: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\nAfter swap, second array: ");
    for (int i = 0; i < n; i++) printf("%d ", b[i]);
    printf("\n");
    return 0;
}
