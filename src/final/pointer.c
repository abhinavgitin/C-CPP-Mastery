#include <stdio.h>

int main()
{
    int a = 9;
    int x = 9;
    int *p;
    p = &x;
    printf("%d\n\n", *p);
    *p = *p + 1;
    printf("%d\n\n", *p);
    printf("%d\n\n", x);
    // gives randowm garbage value! when we do float *p;
    // this is importnat!
    char *str = "Abhinav is My name";
    while (*str != '\0')
    {
        printf("%c", *str);
        str++;
    }
    printf("\n");
    // then the last one "Abhinav is my name" gets overritten by this!
    str = "This is my new name";
    while (*str != '\0')
    {
        printf("%c", *str);
        str++;
    }
    printf("\n");
    int *s;
    *s = 10; // not valid
    printf(" s is  = %d\n", *s);
    return 0;
}