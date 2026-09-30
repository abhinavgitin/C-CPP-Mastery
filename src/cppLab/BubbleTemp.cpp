#include <iostream>

using namespace std;

template <class T> void bubbleSort( T arr[], int size ) {
    // T temp;
    for ( int i = 0 ; i < size - 1; i++ ) {
        for ( int j = 0; j < size - 1 - i; j++ ) {
            if ( arr[j] > arr[j+1] ) {
                arr[j] = arr[j+1] + arr[j];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j+1];
            }
        }
    }
}
int main() {
    int size;
    cout << "Enter the size for the array : ";
    cin >> size;
    int arr[size];
    cout << "Enter the array : " << endl;
    for ( int i = 0 ; i < size ; i++ ) {
        cin >> arr[i];
    }
    bubbleSort( arr, size );
    cout << "The array after sorting is : ";
    for ( int i = 0 ; i < size ; i++ ) {
        cout << arr[i] << " ";
    }
   cout << endl;
    return 0;
} 