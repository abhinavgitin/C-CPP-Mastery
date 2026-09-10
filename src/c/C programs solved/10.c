#include <stdio.h>

#define PI 3.1415926535

int main(void) {
    const int LIMIT = 100;
    int n = 42;
    printf("PI = %.10lf\n", PI);
    printf("LIMIT = %d\n", LIMIT);
    printf("sizeof(int) = %zu bytes\n", sizeof(int));
    printf("sizeof(n) = %zu bytes\n", sizeof(n));
    return 0;
}
