#include <iostream>

using namespace std;

class OperatorOperation {
    int a;
    int b;

    public:
        void read() {
            cout<<"Enter : "<<endl;
            cin>>this->a;
            cin>>this->b;
        }
        void display() {
            cout<<"This is the output : ";
            cout<<this->a<<endl;
            cout<<this->b<<endl;
        }
        OperatorOperation operator+( OperatorOperation ob ) {
            OperatorOperation temp;
            temp.a = a + ob.a;
            temp.b = b + ob.b;
            return temp;
        }

        OperatorOperation operator++( int a ) {
            OperatorOperation temp = *this;
            this->a++;
            this->b++;
            return temp;
        }

};
int main() {
    OperatorOperation ob1, ob2, ob3;
    ob1.read();
    ob2.read();
    ob3 = ob1++;
    ob3.display();
    ob3 = ob1+ob2;
    ob3.display();
    return 0;
}