#include <stdio.h>
#include <string.h>
struct student {
    char name[100];
    int age;
    int rollNo;

} s1;

int main() {
    struct student s1;


    struct student2 {
        int roll;
    } s2; // we can also do this 
    s2.roll = 99;
    printf("%d\n",s2.roll);
    // meaning that to access the same also we to make the s2 or by struct student2 s2;

    s1.age = 90;
    strcpy(s1.name,"Abhinav");
    s1.rollNo = 8;
    printf("name is = %s\n", s1.name);
    printf("age is = %d\n", s1.age);
    printf("rollno is = %d\n", s1.rollNo);
    return 0;
}
// this shows that how we declare and the initilize the structure
