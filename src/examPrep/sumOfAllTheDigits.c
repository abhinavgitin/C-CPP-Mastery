#include <stdio.h>
int main() {
    int num, sum = 0, digits;
    printf("Enter the number to calc its digits ");
    scanf("%d",&num);
    while ( num > 0 ) {
        digits = num % 10;
        sum += digits;
        num /= 10;
    }
    printf("Sum is %d",sum);
    return 0;
}