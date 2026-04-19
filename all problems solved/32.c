#include <stdio.h>

int main(void) {
    int n, original, rev = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    original = n;
    if (n < 0) n = -n;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    printf("Reverse = %d\n", rev);
    printf("Palindrome? %s\n", (rev == (original < 0 ? -original : original)) ? "Yes" : "No");
    return 0;
}
