#include <iostream>
using namespace std;

int *arr;

class Arrays {
    public:
        int len;
        
        void length() {
            cout<<"\nEnter the length for the array : ";
            cin>>len;
            arr = new int[len]; // creat an array here
        }
        void inputArray() {
            cout<<"\nEnter the array elements one by one : \n";
            for ( int i = 0 ; i < len ; i++ ) {
                cout<<"Element No : "<<i<<" : ";
                cin>>arr[i];
            }
        }
        void display() {
            cout<<"\nThe array Elements are as follows : \n";
            for ( int i = 0 ; i < len ; i++ ) {
                cout<<"Elements No : "<<i<<" is : "<<arr[i]<<"\n";
            }
        }
};
int main() {
    Arrays a1;
    a1.length();
    a1.inputArray();
    a1.display();
    return 0;
}