#include <stdio.h>

int main() {
    char str1[10] = "Abhinav";
    char str2[100] = "Abhinav";
    

    //initilize the pointers
    char *s1 = str1;
    char *s2 = str2;

    // compare them first
    int diff = 0;
    while ( *s1 != '\0' && *s2 != '\0' ) {
        if ( *s1 != *s2 ) {
            diff = *s1 - *s2;
            break;
        }
        s1++;
        s2++;
    }
    if ( diff == 0 ) {
        printf("The string are same\n");
    } else if ( diff > 1 ) {
        printf("the string %s is greater then %s \n", str1, str2);
    } else {
        printf("the string %s is greater then %s \n", str2, str1);
    }
    return 0;
}