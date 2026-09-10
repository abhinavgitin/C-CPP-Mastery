#include <iostream>
using namespace std;

class AccessModifier {
    public:
        string name;
        int registrationNo;
        string address;
    public:
        void read() {
            cout<<"Enter the name, registration Number, and the address of the student : \n";
            cin>>name>>registrationNo>>address;
        }
        friend void display(AccessModifier); // here we gave the access to the method display for the use of the class members
};

void display( AccessModifier a ) {
    cout<<a.name<<" is the name of the studnet"<<endl;
    cout<<a.address<<" is the address of the student"<<endl;
    cout<<a.registrationNo<<" is the registration Number of the student"<<endl;
}

int main() {
    AccessModifier accessModifier;
    accessModifier.read();
    display(accessModifier);
    return 0;
}