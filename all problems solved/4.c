#include <stdio.h>

int main(void) {
    int a;
    float b;
    printf("Enter an integer and a float: ");
    scanf("%d %f", &a, &b);
    printf("You entered: a=%d, b=%.2f\n", a, b);
    return 0;
}
