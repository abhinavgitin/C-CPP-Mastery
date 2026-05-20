#include <stdio.h>

int main() {
    long long int rem, base = 1, bin, digit = 0;
    printf("Enter a binary number : ");
    scanf("%lld", &bin);
    while ( bin > 0 ){
        rem = bin%10;
        digit += rem * base;
        base *= 2;
        bin /= 10;
    }
    printf("The Binary number is : \n%lld\n",digit);
    float x = 5/(float)2;
    printf("%f",x);
    return 0;
}