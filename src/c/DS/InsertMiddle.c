#include <stdio.h>

int main()
{
    int length;
    printf("Enter the length ");
    scanf("%d", &length);
    int arr[length + 1];
    for (int i = 0; i < length + 1; i++)
    {
        if (i == length / 2)
        {
            arr[i] = 0;
            continue;
        }
        scanf("%d", &arr[i]);
    }
    printf("Enter the element you want to insert : ");
    int ele;
    scanf("%d", &ele);
    arr[length / 2] = ele;
    printf("This is the updated array : \n");
    for (int i = 0; i < length + 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
