#include <stdio.h>

#define SIZE 2

// 🔹 Structure
struct Student {
    int roll;
    char name[50];
    float phy, chem, math;
};

// 🔹 Function declarations
void addStudents(struct Student s[], int n);
void displayStudents(struct Student s[], int n);
void updateStudent(struct Student s[], int n);

int main() {
    struct Student s[SIZE];

    addStudents(s, SIZE);
    displayStudents(s, SIZE);
    printf("Do you want to update anything here? y : n ");
    getchar();
    char yesOrNo;
    scanf(" %c", &yesOrNo);
    while ( yesOrNo != 'n' ) {
        updateStudent(s, SIZE);
        printf("Do you want to update anything more? : y : n ");
        scanf(" %c", &yesOrNo);
        if ( yesOrNo == 'n') break;
    }
    displayStudents(s, SIZE);

    return 0;
}


void addStudents(struct Student s[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Physics Chemistry Maths: ");
        scanf("%f %f %f", &s[i].phy, &s[i].chem, &s[i].math);
    }
}

// 🔹 Display all students
void displayStudents(struct Student s[], int n) {
    printf("\n--- Student Records ---\n");

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i);
        printf("Roll: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.1f %.1f %.1f\n",
               s[i].phy, s[i].chem, s[i].math);
    }
}

// 🔹 Update specific student
void updateStudent(struct Student s[], int n) {
    int index;

    printf("\nEnter index to update (0 to %d): ", n - 1);
    scanf("%d", &index);

    if (index >= 0 && index < n) {
        printf("Enter new Name: ");
        scanf(" %[^\n]", s[index].name);

        printf("Enter new Marks (Phy Chem Math): ");
        scanf("%f %f %f",
              &s[index].phy, &s[index].chem, &s[index].math);
    } else {
        printf("Invalid index!\n");
    }
}