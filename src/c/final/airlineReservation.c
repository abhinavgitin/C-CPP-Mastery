#include <stdio.h>

int main() {
    /* Answer :
    we use a 1D array in c to demonstrate that which seats are reservered and which seat are empty
    that is done using the 1 and 0s where
    for each index if the element at that index is 1 then the seat is reaserved
    if for each index if the element at that index is 0 then the seat is empty
    so the array with the reservatiion will look like this :
    arr[50] = {1,1,1,0,01,0,1,0} and sooo on till 50-1th index */
    //==============

    /* to search the first empty seat we use a liner serach for the passesgers reservatiion*/
    int arr[10] = {1,1,1,1,1,1,1,1,0,1};
    int emptySeatNumber = -1;
    for ( int i = 0 ; i < 10 ; i++ ) {
        if ( arr[i] == 0 ) {
            emptySeatNumber = i+1;
            break;
        }
    }
    if ( emptySeatNumber == -1 ) {
        printf("Seat in the airplane is not available");
    } else {
        printf("Seat for the passenger is available at = %d", emptySeatNumber);
    }
    return 0;
}