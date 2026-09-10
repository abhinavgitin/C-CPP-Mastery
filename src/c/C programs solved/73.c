#include <stdio.h>

int main(void) {
    int n, a[20][20];
    printf("Enter order of square matrix: ");
    scanf("%d", &n);
    if (n <= 0 || n > 20) return 0;
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) scanf("%d", &a[i][j]);
    for (int i = 0; i < n; i++) a[i][i] = 0;

    printf("Matrix after replacing left diagonal with zero:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
