#include <stdio.h>

int reverse_num(int n, int rev) {
    if (n == 0) return rev;
    return reverse_num(n / 10, rev * 10 + (n % 10));
}

int main(void) {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int x = n < 0 ? -n : n;
    int rev = reverse_num(x, 0);
    printf("Reversed = %d\n", rev);
    return 0;
}
