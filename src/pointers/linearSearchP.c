#include <stdio.h>

int main() {
    int key = 0;
    int *p = &key;
    int arr[] = {4,2,2,1,3,4,6,7,8,9,0,9,8,8,7,5,97,4,3,2,1,1,1,1,3,4,5,6,6,7};
    int *arrp = arr;
    printf("Enter the key to find : ");
    scanf("%d", p);
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) 
    {
        if ( *p == *(arrp+i) ) {
            printf("Target found at index %d\n",i+1);
            return 0;
        }
    }
    printf("Targer element not found\n");
    return 0;
}