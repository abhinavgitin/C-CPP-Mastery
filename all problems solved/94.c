#include <stdio.h>

void display_2d(int *p, int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", *(p + i * c + j));
        }
        printf("\n");
    }
}

int main(void) {
    int r, c, a[20][20];
    printf("Enter rows and cols: ");
    scanf("%d %d", &r, &c);
    if (r <= 0 || c <= 0 || r > 20 || c > 20) return 0;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    display_2d(&a[0][0], r, c);
    return 0;
}
