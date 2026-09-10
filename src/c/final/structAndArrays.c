#include <stdio.h>
struct Student {
    int age;
    char name[100];
    int registration_number;
    char address[1000];
};

int main() {
    // Question : make a Array Structure that store the student details in it!
    struct Student s1[2];
    for (int i = 0; i < 2; i++)
    {   
        printf("Enter the details for student %d\n",i+1); 
        printf("Enter the name of the studnet : ");
        scanf(" %[^\n]", s1[i].name);
        printf("Enter the address of the student : ");
        scanf(" %[^\n]", s1[i].address);
        printf("Enter the age of the studnet : ");
        scanf("%d", &s1[i].age);
        printf("Enter the registration Number of the student : ");
        scanf("%d", &s1[i].registration_number);
    }
    
    printf("\n\nThe details for the studnets are as follows\n");
    for ( int i = 0 ; i < 2 ; i++ ){
        printf("The details for student %d are : \n",i+1);
        printf("The name of the studnet is : %s\n", s1[i].name);
        printf("The address of the studnet is : %s\n", s1[i].address);
        printf("The age of the studnet is : %d\n", s1[i].age);
        printf("The registration number of the studnet is : %d\n\n", s1[i].registration_number);
    }
    return 0;
}