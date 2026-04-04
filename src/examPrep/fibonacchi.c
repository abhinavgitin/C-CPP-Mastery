#include <stdio.h>
int main() {
    int i, limit;
    long long a = 0,b = 1 , c;
    printf("Enter the limit to print the fibonacchi series \n");
    scanf("%d",&limit);
    for ( i = 0 ; i <= limit ; i++ ) {
        printf("%lld ",a);
        c = a+b;
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}