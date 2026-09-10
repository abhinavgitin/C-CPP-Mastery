#include <stdio.h>

int main() {
    int num = 7;
    for ( int i = num ; i >= 1 ; i = i-2 ) {
        for ( int j = i ; j >= 1 ; j-- ) {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}