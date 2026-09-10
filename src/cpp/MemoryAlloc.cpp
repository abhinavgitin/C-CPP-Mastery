/*

NOTES: 
1. the dynamic memory allocation is used for the runtime allocation of the memory for example:
int n; -> cin>>n -> and then we initilize it into the new int[n] this does the runtime allocation
where as the int arr[9] does the compile time allocation
2. the other thing is the we do the copy of the elements form the old arr to the new arr and ensure to delete the old arr
to free up the space
3. we can downgrade the size like 20 -> 10 we can upgrade only like 10 -> 20 just assign the pointer to each other like arr = temp just points to the new memory
4.  the new keywoed is the one to allocate the memory and the delete is the one to free up the meory from the crap 
and keep things healtly;
*/


#include <iostream>
using namespace std;

class MemoryAlloc {
    public:
        int a;

    public:
        MemoryAlloc(){
            cout<<"this is a non parameterised construcctor "<<this->a<<endl;
            this->a = 0;
        }

        MemoryAlloc(int num) {
            this->a = num;
            cout<<"this is a parameterised construcctor "<<this->a<<endl;
        }
        
        ~MemoryAlloc() {
            cout<<"This is a destructor"<<endl;
        }

};

int main() {
    MemoryAlloc *ptr;
    ptr = new MemoryAlloc(5);
    delete ptr; // this we don in c++ just for freeing memory and nothing I PREFER JAVA SO!
    

    int n;
    cout<<"Enter the length of the array that you want : ";
    cin>>n;
    int *arr = new int[n]; // dynamically creates 5 integers idk what the fuck is the use of the normal one int arr[5]
    cout<<"Enter the "<<n<<" no of elements"<<endl;
    for ( int i = 0 ; i < n ; i++ ) {
        cin>>arr[i];
    }
    cout<<"Enter the new size of the array to resize the same : ";
    int newn;
    cin>>newn;
    int *temp = new int[newn];
    for ( int i = 0 ; i < n; i++ ) {
        temp[i] = arr[i];
    }
    delete[] arr; // The pointer variable arr itself still exists, but the memory it points to is no longer valid to access.
    cout<<"The size of the array has been incresed to "<<newn<<" enter "<<newn-n<<" more of 'em"<<endl;
    for ( int i = n ; i < newn ; i++ ) {
        cin>>temp[i];
    }
    cout<<"This is the output : "<<endl;
    for ( int i = 0 ; i < newn ; i++ ) {
        cout<<temp[i]<<" ";
    }
    cout<<endl;
    return 0;
}