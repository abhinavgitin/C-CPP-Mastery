#include <stdio.h>

int main(void) {
    int n, x, pos = 0, neg = 0, zero = 0;
    printf("Enter size: ");
    scanf("%d", &n);
    if (n <= 0) return 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x > 0) pos++;
        else if (x < 0) neg++;
        else zero++;
    }
    printf("Positive=%d Negative=%d Zero=%d\n", pos, neg, zero);
    return 0;
}
