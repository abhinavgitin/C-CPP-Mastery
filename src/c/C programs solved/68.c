#include <stdio.h>

int main(void) {
    int r, c, a[20][20];
    printf("Enter rows and cols: ");
    scanf("%d %d", &r, &c);
    if (r <= 0 || c <= 0 || r > 20 || c > 20) return 0;
    for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) scanf("%d", &a[i][j]);

    printf("Transpose:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) printf("%d ", a[j][i]);
        printf("\n");
    }
    return 0;
}
