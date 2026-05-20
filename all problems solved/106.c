#include <stdio.h>
#include <string.h>

struct Student
{
    char name[100];
    char reg_no[40];
};

int main(void)
{
    struct Student s[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';

        printf("Enter registration number: ");
        fgets(s[i].reg_no, sizeof(s[i].reg_no), stdin);
        s[i].reg_no[strcspn(s[i].reg_no, "\n")] = '\0';
    }

    FILE *fp = fopen("student_details", "w");
    if (fp == NULL)
    {
        printf("Unable to create file.\n");
        return 1;
    }
    for (int i = 0; i < 10; i++)
    {
        fprintf(fp, "%s,%s\n", s[i].name, s[i].reg_no);
    }
    fclose(fp);

    fp = fopen("student_details", "r");
    if (fp == NULL)
    {
        printf("Unable to reopen file.\n");
        return 1;
    }

    printf("\n%-4s %-30s %-20s\n", "No", "Name", "Registration No");
    char line[180];
    int idx = 1;
    while (fgets(line, sizeof(line), fp) != NULL)
    {
        line[strcspn(line, "\n")] = '\0';
        char *comma = strchr(line, ',');
        if (comma != NULL)
        {
            *comma = '\0';
            printf("%-4d %-30s %-20s\n", idx++, line, comma + 1);
        }
    }

    fclose(fp);
    return 0;
}
