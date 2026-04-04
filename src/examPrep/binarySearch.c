#include <stdio.h>
int main() {
    int i, j, start, end, mid, target, n, temp, found = 0;
    printf("Enter the total no of Numbers : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements ");
    for ( i = 0 ; i < n ; i++ ) {
        scanf("%d",&arr[i]);
    }
    printf("Enter the target to find in the array : ");
    scanf("%d",&target);
    // we sort the array if its not sorted and the check find the target;
    for ( i = 0 ; i < n  ; i++ ) {
        for ( j = 0 ; j < n -1 - i ; j++ ) {
            if ( arr[j] > arr[j+1] ) { // agar aage wala element bada hai toh 
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Sorted array is : ");
    for (i = 0; i < n; i++)
    {
        printf("%3d ", arr[i]);
    }
    // now we do the binary search;
    start = 0;
    end = n-1;
    while ( start <= end ) {
        mid = (start + end) / 2;
        if ( arr[mid] == target ) {
            found = 1;
            break;
        } else if ( arr[mid] > target ){
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    if ( found == 1 ) {
        printf("\n%d found at index %d ",target,mid);
    } else {
        printf("\n%d not found",target);   
    }
    return 0;
}