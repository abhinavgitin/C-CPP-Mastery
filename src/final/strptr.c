#include <stdio.h>

int main() {
    char str1[100];
    char str2[100];
    char str3[100];
    printf("Enter the first string : ");
    scanf(" %[^\n]", str1);
    printf("Enter the second string : ");
    scanf(" %[^\n]", str2);
    char *ptr1 = str1;
    char *ptr2 = str2;
    char *ptr3 = str3;
    
    /*======= concatination using pointers =======*/
    int i = 0;
    int j = 0;
    while ( *(ptr1 + i) != '\0' ) i++;
    while ( *(ptr2+j) != '\0' ) {
        *(ptr1+i) = *(ptr2+j);
        i++;
        j++;
    }
    *(str1+i) = '\0';
    printf("The string after the concatination is = %s\n", str1);
    
    /* ===========copy strings===============*/
    i = 0;
    j = 0;
    while ( *(ptr2+i) != '\0' ) {
        *(ptr3+j) = *(ptr2+i);
        i++;
        j++;
    }
    *(ptr3+j) ='\0';
    printf("The string after copy from str2 to str3 is = %s\n", str3);

    *ptr1 = '\0';
    *ptr2 = '\0';
    *ptr3 = '\0';
    printf("Enter str1 : ");
    scanf(" %[^\n]", ptr1);
    printf("Enter str2 : ");
    scanf(" %[^\n]", ptr2);
    
    /*==========strring compare===============*/
    int diff = 0;
    printf("Comparing str1 with str2\n");
    while ( *(ptr1) != '\0' || *ptr2 != '\0' ) { 
        if ( *ptr1 != *ptr2) {
            diff = 1;
            if ( (int)(*ptr1) - (int)(*ptr2) > 0 ) {
                printf("str1 is greater\n");
                break;
            } else {
                printf("str2 is greater \n");
                break;
            }
        }
        ptr1++;
        ptr2++;
    }
    if ( diff == 0 ) {
        printf("Both the strings are same\n");
    }
    return 0;
}