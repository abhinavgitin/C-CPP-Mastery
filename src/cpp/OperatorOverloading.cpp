#include <iostream>
using namespace std;

class OperatorOverloading {
    int a;
    int b;

    public: 
        
        void read() {
            cout<<"Enter the two numbers : "<<endl;
            cin>> a >> b;
        }

        void display() {
            cout<<"The Numbers are : "<<a<<" and "<<b;
        }
        OperatorOverloading operator+( OperatorOverloading plus ) {
            OperatorOverloading temp;
            temp.a = this->a + plus.a;
            temp.b = this->b + plus.b;
            return temp;
        }
        int getA() {
            return this->a;
        }
        int getB() {
            return this->b;
        }
};


int main() {
    OperatorOverloading operator1, operator2, operator3, operator4;
    operator1.read();
    operator2.read();
    operator3.read();
    operator4 = operator1 + operator2 + operator3; // this is a pass by value 
    // the operator1 is explicitely passed with the operator2 and thus we do the addition of the member variables of what is being called
    operator4.display();
    // can i now normally do the 1+1?
    cout<<endl<<"The sum of the numbers are "<<operator1.getA()+operator2.getA();
    return 0;
}