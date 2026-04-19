#include <stdio.h>

int main(void) {
    int n, arr[200];
    printf("Enter size: ");
    scanf("%d", &n);
    if (n <= 0 || n > 200) return 0;
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        int t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
    }
    printf("Reversed array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
