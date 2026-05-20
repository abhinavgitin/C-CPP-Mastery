#include <stdio.h>

int main()
{
    int n = 0;
    printf("Enter the total number of prime numbers that you need : ");
    scanf("%d", &n);
    int isPrime = 1;
    for (int i = 2; i < n; i++)
    {
        isPrime = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
        {
            printf("%d ", i);
            // meaning that i is a prime
        }
    }
    return 0;
}