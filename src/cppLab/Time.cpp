#include <iostream>
using namespace std;

class Time {
    
    float hrs;
    int min;
    public:
        Time add(Time t1, Time t2) {
            Time temp;
            temp.hrs = t1.hrs + t2.hrs;
            temp.min = t1.min + t2.min;
            return temp;
        }
        Time add( int x, Time t1 ) {
            Time temp;
            temp.hrs = t1.hrs + x;
            temp.min = t1.min;
            return temp;
        }

        void calcCorrectTime() {
            while ( this-> min >= 60 ) {
                this->hrs += 1.0f;
                this->min -= 60;
            }
            while ( this->hrs >= 24 ) {
                 this->hrs -= 24.0f;
            }
        }

        void readTime() {
            cout << endl << "=========ENTER THE HRS AND AND MIN=========" << endl;
            cout << "Enter the hrs : ";
            cin >> this->hrs;
            cout << "Enter the min : ";
            cin >> this->min;
        }

        void displayTime() {
            cout << endl << "The Time is : " << endl;
            cout << "Hrs is : " << this->hrs << " Hrs" << endl;
            cout << "Min is : " << this->min << " Min" << endl << endl;
        }
};
int main() {
    
    Time t1, t2, ansOfAdd1, ansOfAdd2;

    t1.readTime();
    t2.readTime();

    ansOfAdd1 = ansOfAdd1.add(t1, t2);
    cout << endl << "ADDITION WITHOUT CORRECTION OF THE TIME IS : " << endl;
    ansOfAdd1.displayTime();
    cout << endl << "ADDITION WITHOUT CORRECTION OF THE TIME IS : " << endl;
    ansOfAdd2 = ansOfAdd2.add(50,t1);
    ansOfAdd2.displayTime();
    
    
    ansOfAdd1 = ansOfAdd1.add(t1, t2);
    cout << endl << "CORRECTED TIME IS" << endl;
    ansOfAdd1.calcCorrectTime();  
    ansOfAdd1.displayTime();


    ansOfAdd2 = ansOfAdd2.add(50, t1);
    cout << endl << "CORRECTED TIME IS" << endl;
    ansOfAdd2.calcCorrectTime();  
    ansOfAdd2.displayTime();
    
    t1.calcCorrectTime();
    t2.calcCorrectTime();
    
    t1.displayTime();
    t2.displayTime();

    return 0;
}