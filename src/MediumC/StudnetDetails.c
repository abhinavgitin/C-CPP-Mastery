#include <stdio.h>
struct Student
{
    int roll;
    char name[100];
    float phy, chem, maths;
    char address[100];
    int registrationNo;
};
void addStudnetDetails(struct Student s[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("=====Enter the details for studnet %d", i + 1);
        printf("Enter the name : ");
        scanf(" %[^\n]", s[i].name);
        printf("Enter the roll no : ");
        scanf("%d", &s[i].roll);
        printf("Enter the marks for phy chemistry and maths respectively : ");
        scanf("%f %f %f", &s[i].phy, &s[i].chem, &s[i].maths);
        printf("Enter the address of the studnet : ");
        scanf(" %[^\n]", s[i].address);
        printf("Enter the registration no pf the studnet : ");
        scanf("%d", &s[i].registrationNo);
    }
}
void display(struct Student s[], int size)
{
    printf("\n--- Student Records ---\n");

    for (int i = 0; i < size; i++)
    {
        printf("\nStudent %d\n", i);
        printf("Roll: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.1f %.1f %.1f\n",
               s[i].phy, s[i].chem, s[i].maths);
        printf("Registration no is : %d\n",s[i].registrationNo);
        printf("address is : %s\n", s[i].address);
    }
}
void updateStudnetDetails( struct Student s[], int size ) {
    int idx = 0;
    char ch = 'y';
    while ( ch != 'n' ) {
        printf("\nFor what index of the studnet you want the details to be updated?\n");
        scanf("%d", &idx);
        fflush(stdin);
        printf("Enter the name for the same studnet : ");
        scanf(" %[^\n]", s[idx-1].name);
        printf("Enter the registration no for the same studnet : ");
        scanf("%d", &s[idx-1].registrationNo);
        printf("Enter the physics marks chemistry and maths marks : ");
        scanf("%f %f %f", &s[idx-1].phy, &s[idx-1].chem, &s[idx-1].maths);
        printf("Entere the address of the same studnet : ");
        scanf(" %[^\n]", s[idx-1].address);
        printf("Do you want to update anymore? y : n");
        scanf(" %c", &ch);
        if ( ch != 'y' ) break;
    }
}

int main()
{
    printf("Enter the total no of studnet : ");
    int size = 0;
    scanf("%d", &size);
    struct Student s[size];

    addStudnetDetails(s,size);
    updateStudnetDetails(s,size);
    display(s,size);

    return 0;
}