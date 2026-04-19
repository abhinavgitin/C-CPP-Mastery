#include <stdio.h>

int main(void) {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    if (b == 0) {
        printf("Division and modulo by zero are not allowed.\n");
        return 0;
    }
    printf("a+b = %d\n", a + b);
    printf("a-b = %d\n", a - b);
    printf("a*b = %d\n", a * b);
    printf("a/b = %d\n", a / b);
    printf("a%%b = %d\n", a % b);
    return 0;
}
