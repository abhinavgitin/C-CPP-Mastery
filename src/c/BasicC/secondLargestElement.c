#include <stdio.h>

int main() {
    int arr[] = {2,4,6,8,9,0,5,1};
    int length = sizeof(arr)/sizeof(arr[0]);
    int largest = arr[0];
    int secondLargest = arr[0];
    for ( int i = 0 ; i < length ; i++ ) {
        if ( arr[i] > largest ) {
            secondLargest = largest;
            largest = arr[i];
        } else if ( arr[i] > secondLargest ) {
            secondLargest = arr[i];
        }
    }
    printf("Largest element is = %d\n", largest);
    printf("Second Largest Element is  = %d\n", secondLargest);
    return 0;
}