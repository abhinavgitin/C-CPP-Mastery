#include <iostream>
using namespace std;

class Inheritance {
    private:
        int a;
    protected:
        int b;
    public:
        int c;
};

class derived : public Inheritance {
    public:
        void disp() {
            cout << c;
        }
};
int main() {
    derived d;
    d.disp();
    return 0;
}