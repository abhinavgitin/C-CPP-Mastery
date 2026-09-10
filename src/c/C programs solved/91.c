#include <stdio.h>

void bubble_sort(int *p, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (*(p + j) > *(p + j + 1)) {
                int t = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = t;
            }
        }
    }
}

int main(void) {
    int n, arr[200];
    printf("Enter size: ");
    scanf("%d", &n);
    if (n <= 0 || n > 200) return 0;
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    bubble_sort(arr, n);
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
