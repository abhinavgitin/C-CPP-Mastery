#include <stdio.h>

int main() {
    int bin, rem, base = 1, dec = 0;

    printf("Enter binary number: ");
    scanf("%d", &bin);

    while (bin > 0) {
        rem = bin % 10;
        dec += rem * base;
        base *= 2;
        bin /= 10; 
    }

    printf("Decimal = %d\n", dec);
    return 0;
}