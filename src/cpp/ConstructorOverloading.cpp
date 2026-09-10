#include <iostream>
using namespace std;

class ConstructorOverLoading {
    int num;

    public:
        ConstructorOverLoading(){
            this->num = 0;
            cout<<"This is a non parameterised constructor"<<endl;
        }
        ConstructorOverLoading( int key ) {
            this->num = key;
            cout<<"This is a parameterised constructor "<<this->num<<endl;
        }
        ~ConstructorOverLoading() {
            // they do not have any parameters and has the same properties as that of the constructors
            cout<<"This is a destructor"<<endl;
        }
};

ConstructorOverLoading cs1; // question is that can we mention the parenthesis here? cs1()? and this is a global declared boject

int main() {
    ConstructorOverLoading cs2;
    {
        ConstructorOverLoading cs3(88);
    }
    ConstructorOverLoading cs4(66);
    return 0;
}