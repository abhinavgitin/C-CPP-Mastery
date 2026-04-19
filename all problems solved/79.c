#include <stdio.h>

int add(int x, int y) { return x + y; }

int main(void) {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum = %d\n", add(a, b));
    return 0;
}
