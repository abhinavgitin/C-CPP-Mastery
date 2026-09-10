#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a < 0 ? -a : a;
}

int lcm_ptr(int *a, int *b) {
    int g = gcd(*a, *b);
    if (g == 0) return 0;
    return (*a / g) * (*b);
}

int main(void) {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    int l = lcm_ptr(&x, &y);
    if (l < 0) l = -l;
    printf("LCM = %d\n", l);
    return 0;
}
