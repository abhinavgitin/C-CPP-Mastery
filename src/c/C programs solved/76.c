#include <stdio.h>

int main(void) {
    int r, c, a[20][20];
    printf("Enter rows and cols: ");
    scanf("%d %d", &r, &c);
    if (r <= 0 || c <= 0 || r > 20 || c > 20) return 0;
    for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) scanf("%d", &a[i][j]);

    for (int i = 1; i < r; i += 2) {
        for (int j = 0; j < c; j++) a[i][j] = 0;
    }

    printf("Matrix after replacing even rows with zero:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
