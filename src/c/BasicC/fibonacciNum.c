#include <stdio.h>

void fibo( int a, int b, int limit ){
    if ( limit == 0 ) {
        printf("\n");
        return;
    }
    printf("%d ",a);
    int c = a+b;
    fibo(b,c,limit-1);
}

int main () {
    int a = 0;
    int b = 1;
    int limit;
    printf("Enter the limit for to print the fibonacci series\n");
    scanf("%d",&limit);
    fibo(a,b,limit);
}
