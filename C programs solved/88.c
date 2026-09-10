#include <stdio.h>

int int_pow(int b, int e) {
    int ans = 1;
    for (int i = 0; i < e; i++) ans *= b;
    return ans;
}

int is_armstrong(int n) {
    int x = n, digits = 0, sum = 0;
    while (x > 0) {
        digits++;
        x /= 10;
    }
    x = n;
    while (x > 0) {
        int d = x % 10;
        sum += int_pow(d, digits);
        x /= 10;
    }
    return sum == n;
}

int main(void) {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Not an Armstrong number\n");
        return 0;
    }
    printf("%s\n", is_armstrong(n) ? "Armstrong number" : "Not an Armstrong number");
    return 0;
}
