#include <stdio.h>

void increment(int *arr, int size)
{
    int i;

    for(i = 0; i < size; i++)
    {
        *(arr+i) += 10;
    }
}

void display ( int *arr, int size ){ // ensure me chat that here we dont do *arr[] <- this
    printf("Modified Array:\n");
    for ( int i = 0 ; i < size ; i++ ) {
        printf("%d ",*(arr+i));
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    int i;

    increment(arr, 5);
    display(arr,5);

    return 0;
}