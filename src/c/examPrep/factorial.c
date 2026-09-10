#include <stdio.h>
int main() {
    // we find the factorial here
    long long n, i, fact = 1;
    printf("Enter the number to find its factorial : ");
    scanf("%lld",&n);
    if ( n < 0 ) printf("Fctorial is not possible \n");
    for ( i = n ; i >= 1 ; i-- ) {
        fact *= i;
    }
    printf("The factorial of a number is %lld\n",fact);
    return 0;
}
