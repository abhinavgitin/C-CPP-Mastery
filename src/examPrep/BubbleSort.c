#include <stdio.h>
int main()
{
    int i, j, n, temp;
    printf("Enter the length of the array : ");
    scanf("%d", &n);
    int arr[n]; // array is just initilized here;
    printf("Enter the array Elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // we sort the array if its not sorted!!
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            // here the n is the length of the array we need to ierate for each i the -1 indicates that we prefent the overflow of the array
            // cause we are using j+1 for each traversal and -i means that for each sort we cut off the last element cause for each sort the last element will be already sorted
            if (arr[j] > arr[j + 1])
            {
                // temp = arr[j];
                // arr[j] = arr[j+1];
                // arr[j+1] = temp;
                // or we can do the swaping using only two variable like this
                arr[j] = arr[j] + arr[j + 1]; // a = 9 and b = 5 so a+b = 14 so then b = 14-b; and then a =
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];
                /* so the formula is like 
                a = a+b
                b = a-b
                a = a-b*/
            }
        }
    }
    printf("Sorted array is : ");
    for (i = 0; i < n; i++)
    {
        printf("%3d ", arr[i]);
    }
    return 0;
}