#include <stdio.h>

int main(void) {
    int r, c, a[20][20];
    printf("Enter rows and cols: ");
    scanf("%d %d", &r, &c);
    if (r <= 0 || c <= 0 || r > 20 || c > 20) return 0;
    for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) scanf("%d", &a[i][j]);

    int mn = a[0][0], mx = a[0][0];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (a[i][j] < mn) mn = a[i][j];
            if (a[i][j] > mx) mx = a[i][j];
        }
    }
    printf("Minimum = %d\nMaximum = %d\n", mn, mx);
    return 0;
}
