#include <stdio.h>

int main(void) {
    int n, arr[200];
    printf("Enter size: ");
    scanf("%d", &n);
    if (n <= 0 || n > 200) return 0;
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Odd elements: ");
    for (int i = 0; i < n; i++) if (arr[i] % 2 != 0) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
