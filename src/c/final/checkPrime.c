#include <stdio.h>

int main() {
    int num = 0;
    printf("Enter a numebr to check that it is prime or not : ");
    scanf("%d", &num);
    if ( num <= 1 ) {
        printf("Its is not a prime");
        return 0;
    }
    for ( int i = 2 ; i < num ; i++ ) {
        if ( num % i == 0 ) {
            printf("The numeber is not prime\n");
            return 0;
        }
    }
    printf("The number is prime\n");
    return 0;
}