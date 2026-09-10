#include <stdio.h>
#include <string.h>
int main()
{
    char str[6] = "hello"; // there is a NULL character also
                           //^^^ no 5 here!
    printf("The string is %s\n", str);
    printf("the length of the string is %d\n", strlen(str));

    // SO OUTPUT IS UNPREADICTABLE BECAUSE THE SIZE OF THE STRING IS 5 BUT WE HAVE NOT ALLOCATED SPACE FOR NULL CHARACTER

    char str2[6] = {'h', 'e', 'l', 'l', 'o'};               // this is a char array!
    char manualstring[6] = {'h', 'e', 'l', 'l', 'o', '\0'}; // this is a string now
    // printf("%s\n", str2);
    // printf("%c\n", str2);

    // ----------------------

    char a[10], b[10];
    // scanf("%s", a);
    // scanf("%s", b);
    //
    // char a[10], b[10];
    //  scanf("%s", a);
    //  scanf(" %[^\n]", b);
    scanf("%[^\n]", a);
    scanf(" %[^\n]", b);
    printf("the string is : \n%s \n%s\n", a, b);
    return 0;
}