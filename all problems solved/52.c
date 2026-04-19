#include <stdio.h>

int main(void) {
    int n, arr[200];
    printf("Enter size: ");
    scanf("%d", &n);
    if (n <= 0 || n > 200) return 0;
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Elements at even locations (2,4,..): ");
    for (int i = 1; i < n; i += 2) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
