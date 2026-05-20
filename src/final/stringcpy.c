#include <stdio.h>

int main() {
    char str1[100] = "abhinav";
    char str2[100] = " puri";
    char *s1 = str1;
    char *s2 = str2;
    while ( *s2 != '\0' ) {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
    printf("The copied string is %s\n", str1);
    return 0;
}