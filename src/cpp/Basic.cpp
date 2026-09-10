#include <iostream>
using namespace std;

class Student{
    public:
        int age;
        int rollNo;
        float cgpa;
    public:
        void read(){
            cout<<"\nEnter the details of the student : \n";
            cout<<"Enter the age, rollNo, and cgpa of the student : \n";
            cin>>age>>rollNo>>cgpa;
        }
        void display() {
            cout<<"The age is : "<<age<<" The roll number is "<<rollNo<<" The cgpa of the studnet is "<<cgpa<<"\n";
        }
};

int main() {
    Student s1, s2;
    cout<<"Enter the details of the student : \n";
    cout<<"Enter the age, rollNo, and cgpa of the student : \n";
    cin>>s1.age>>s1.rollNo>>s1.cgpa;
    cout<<"The age is : "<<s1.age<<" The roll number is "<<s1.rollNo<<" The cgpa of the studnet is "<<s1.cgpa<<"\n";
    s1.read();
    s1.display();
    s2.read();
    s2.display();
    return 0;
}
