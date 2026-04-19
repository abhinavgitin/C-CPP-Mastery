#include <stdio.h>

int main(void) {
    float f = 3.14f;
    char c = 'Z';
    double d = 12345.6789;
    unsigned int u = 4000000000U;
    printf("float=%f\nchar=%c\ndouble=%.4lf\nunsigned int=%u\n", f, c, d, u);
    return 0;
}
