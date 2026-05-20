#include <stdio.h>

int main() {
    int arr[32], num;
    printf("Enter a decimal number : ");
    scanf("%d", &num);
    if ( num == 0 ) {
        printf("0");
        return 0;
    }
    int idx = 0;
    while ( num > 0 ) {
        arr[idx] = num%2;
        num /= 2;
        idx++;
    }
    for ( int i = idx ; i >= 0 ; i-- ) {
        printf("%d",arr[i]);
    }
    return 0;
}