#include <stdio.h>
#include <string.h>
struct student {
    char name[100];
    int age;
    int rollNo;

} s1;

int main() {
    struct student s1;

    s1.age = 90;
    strcpy(s1.name,"Abhinav");
    s1.rollNo = 8;
    printf("name is = %s\n", s1.name);
    printf("age is = %d\n", s1.age);
    printf("rollno is = %d\n", s1.rollNo);
    return 0;
}
// this shows that how we declare and the initilize the structure
