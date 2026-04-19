#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100] = "This is my name";
    char str2[100] = "Abhinav";
    int length1 = strlen(str1);
    int length2 = strlen(str2);
    printf("the length of str1 is %d\n", length1);
    printf("The length of the str2 is %d\n", length2);
    int i = 0, j = 0;
    while (str2[i] != '\0')
        i++;
    while (str1[j] != '\0')
    {
        str2[i] = str1[j];
        j++;
        i++;
    }
    str2[i] = '\0';
    printf("The string now is : %s\n", str2);

    return 0;
}