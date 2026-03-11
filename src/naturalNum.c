#include <stdio.h>
int printSum(int n);
int main() {
    int n = 7;
    int ans = printSum(n);
    printf("%d",ans);
}
int printSum( int n ) {
    if ( n == 1 ) return 1;
    return n*n + printSum(n-1);
}