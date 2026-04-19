#include <stdio.h>

int main(void) {
    float radius;
    float *p = &radius;
    const float PI = 3.1415926f;
    printf("Enter radius: ");
    scanf("%f", p);
    printf("Area = %.2f\n", PI * (*p) * (*p));
    return 0;
}
