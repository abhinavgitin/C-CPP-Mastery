#include <stdio.h>
int main() {
    int temp, num, rev = 0, digits;
    printf("Enter a number : ");
    scanf("%d",&num);
    temp = num;
    while ( num > 0 ) {
        digits = num % 10;
        rev = (rev*10)+digits; // here what we do is we increase the position of the rev for each addition of the number from
        // onces place to tens to hundreads place
        num /= 10; // remove the last digit
    }
    printf("%d \n",temp );
    if ( temp == rev ) printf("The number is a palindrome number\n");
    else printf("The number is not a plaindrome\n");
}