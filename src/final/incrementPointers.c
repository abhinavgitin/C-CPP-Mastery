#include <stdio.h>
int main() {

    // 1. *p++ → read current, then move pointer forward
    int a[] = {10, 20, 30};
    int *p = a;
    printf("*p++\n");
    printf("value = %d\n", *p++);  // prints 10, p moves to a[1]
    printf("next  = %d\n", *p);    // prints 20

    printf("\n");

    // 2. *++p → move pointer forward first, then read
    int b[] = {10, 20, 30};
    int *q = b;
    printf("*++p\n");
    printf("value = %d\n", *++q);  // p moves to b[1] first, prints 20
    printf("next  = %d\n", *q);    // still 20

    printf("\n");

    // 3. (*p)++ → read current value, then increment the VALUE
    int c[] = {10, 20, 30};
    int *r = c;
    printf("(*p)++\n");
    printf("value = %d\n", (*r)++); // prints 10, c[0] becomes 11
    printf("after = %d\n", *r);     // prints 11, pointer didn't move

    printf("\n");

    // 4. ++(*p) → increment the VALUE first, then read
    int d[] = {10, 20, 30};
    int *s = d;
    printf("++(*p)\n");
    printf("value = %d\n", ++(*s)); // d[0] becomes 11, prints 11
    printf("after = %d\n", *s);     // still 11, pointer didn't move

    return 0;
}