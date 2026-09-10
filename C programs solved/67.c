#include <stdio.h>

int main(void) {
    int r, c, a[20][20], b[20][20], p[20][20];
    printf("Enter rows and cols: ");
    scanf("%d %d", &r, &c);
    if (r <= 0 || c <= 0 || r > 20 || c > 20) return 0;

    printf("Enter first matrix:\n");
    for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) scanf("%d", &a[i][j]);
    printf("Enter second matrix:\n");
    for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) scanf("%d", &b[i][j]);

    for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) p[i][j] = a[i][j] * b[i][j];

    printf("Element-wise product matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) printf("%d ", p[i][j]);
        printf("\n");
    }
    return 0;
}
