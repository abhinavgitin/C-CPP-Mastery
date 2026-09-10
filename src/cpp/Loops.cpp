#include <iostream>
using namespace std;

class Loops{
    public:
        int from, to;
        void useLoops(int from, int to) {
            for ( int i = from ; i <= to ; i++ ) {
                cout<<"This is a Loop output No : "<<i<<"\n";
            }
        }
        void enterFrom() {
            cout<<"\nEnter from what range to iterate : ";
            cin>>from;
        }
        void useTo() {
            cout<<"\nEnter Where to end the loop : ";
            cin>>to;
        }
};

int main() {
    Loops l1;
    l1.enterFrom();
    l1.useTo();
    cout<<"The loops will iterate form : "<<l1.from<<" to : "<<l1.to<<"\n";
    l1.useLoops(l1.from,l1.to);
    return 0;
}