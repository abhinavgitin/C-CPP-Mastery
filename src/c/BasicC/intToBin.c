#include <stdio.h>

int main() {
    int num, bin[32];
    printf("Enter the number : ");
    scanf("%d", &num);
    if ( num == 0 ) {
        printf("Binary num of the 0 is 0\n");
        return 0;
    }
    int i = 0;
    while ( num > 0 ) {
        bin[i] = num%2;
        num /= 2;
        i++;
    }
    printf("The binary num is : \n");
    for ( i = i-1 ; i >= 0  ; i-- ) {
        printf("%d",bin[i]);
    }
    printf("\n");
    return 0;
}