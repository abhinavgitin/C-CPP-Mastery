#include <stdio.h>
struct student
{
    char name[100];
    int rollNo;
    char phoneNo[15];
    char address[1000];
    int registrationNo;
};

int main()
{
    // this is another way to declare the structure!
    int noOfStudents = 0;
    printf("Enter the no of students : ");
    scanf("%d", &noOfStudents);
    struct student s1[noOfStudents];
    // we made an array and now we store the name of the students using the structure templete
    for (int i = 0; i < noOfStudents; i++)
    {
        printf("Enter the name of the %d student : ", i+1);
        scanf(" %5[^\n]", s1[i].name); // we limit the length of the name and so prevent the overflow 
        // reads max 99 chars (leaves 1 for \0)
        while(getchar() != '\n'); // when we have the limit less then the name then 
        /* what happens is the remaning letters after the limit range of the name gets into the next input which is being read
        so to avoid that and clear flush that we use the while loop and the get that char till the new line
        so that the new input reads correctly 
        so the best convention for you to use is this using the while loop getchar() */
        printf("Enter the phone Number of the student : ");
        scanf(" %[^\n]", s1[i].phoneNo);
        printf("Enter the address of the student : ");
        scanf(" %999[^\n]", s1[i].address);
        printf("Enter the registration no of the student : ");
        scanf("%d", &s1[i].registrationNo);
        printf("Enter the roll no of the student : ");
        scanf("%d", &s1[i].rollNo);
        printf("==================================================\n");
    }
    for (int i = 0; i < noOfStudents; i++)
    {
        printf("The name of the student is = %s\n", s1[i].name);
        printf("The adress of the student is = %s\n", s1[i].address);
        printf("The registration no of the studnet is = %d\n", s1[i].registrationNo);
        printf("The roll no of the student is = %d\n", s1[i].rollNo);
        printf("The phone no of the student is = %s\n", s1[i].phoneNo);
        printf("=================\n");
    }

    return 0;
}
