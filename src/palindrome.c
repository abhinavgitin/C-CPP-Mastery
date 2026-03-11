#include <stdio.h>
int main()
{
    int num, revNum = 0, t = 0;
    printf("Enter a number to get its palindrome and check : ");
    scanf("%d", &num);
    int n = num;
    while (n != 0)
    {
        t = n % 10;
        revNum = (revNum * 10) + t;
        n /= 10;
    }
    if (num == revNum)
        printf("Its a palrindrome");
    else
        printf("Its not a palindrome");
    return 0;
}