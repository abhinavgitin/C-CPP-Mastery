#include <stdio.h>

int main() {
    int sum = 0;
    int *psum = &sum;
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    int *arrp = arr;
    for ( int i = 0 ; i < 10 ; i++ ) {
        *psum += *(arr+i);
    }
    printf("Sum is = %d\n", sum);
    int avg = *psum/10;
    printf("Average = %d\n", avg);
    return 0;
}