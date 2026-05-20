#include <string.h>
#include <stdio.h>
#define PI 3.14
int main()
{
    double ans = PI * 5 * 5;
    printf("%lf", ans);
    // here the ^^^^^^^ gives us 0 because the return of the ealuation is float or double and not %d i.e integer!
    char str[] = "A";
    int len = strlen(str);
    printf("\n\nThe length of the array is %d", len); // gives 1
    len = sizeof(str);
    printf("\n\nThe size of the array is%d\n\n", len); // gives 2

    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(char));
    printf("%d\n", sizeof(double));
    const int a = 6;
    printf("a is = %d\n", a);
    // a = 8;
    // printf("a is = %d\n", a); so this gives read only error output!

    char ch = 'A'+25;
    printf("%c", ch);
    return 0;
}