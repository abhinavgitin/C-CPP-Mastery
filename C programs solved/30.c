#include <stdio.h>

int main(void) {
    int n;
    printf("Enter N (last repeated digit term): ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i * 11;
    }
    printf("Sum = %d\n", sum);
    return 0;
}
