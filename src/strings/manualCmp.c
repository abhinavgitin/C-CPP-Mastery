#include <stdio.h>

int main() {
    char str1[20] = "Abhinav"; // this is the first string
    char str2[20] = "AbhinavPuri"; // this is the second string
    int i = 0;
    int diff = 0;
    while (str1[i] != '\0' || str2[i] != '\0'  ) {
        if ( str1[i] != str2[i] ) {
            diff = str1[i] - str2[i];
            break;
        }
        i++;
    }
    if ( diff == 0 ) {
        printf("The Strings are same\n");
    } else if ( diff > 0 ) {
        // we do this because the manual compare will give the value more than that of the inbuilt function 
        // it gives values more than 0 so we use ">"
        printf("The string %s is greater then %s ",str1, str2);
    } else {
        // the last condition will be diff < 1 so 
        printf("The string %s is greater then %s ",str2, str1);
    }
    return 0;
}