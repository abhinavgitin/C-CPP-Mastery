#include <stdio.h>

int main(void) {
    int n, a[20][20], sum = 0;
    printf("Enter order of square matrix: ");
    scanf("%d", &n);
    if (n <= 0 || n > 20) return 0;
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) scanf("%d", &a[i][j]);
    for (int i = 0; i < n; i++) sum += a[i][n - 1 - i];
    printf("Sum of right diagonal = %d\n", sum);
    return 0;
}
