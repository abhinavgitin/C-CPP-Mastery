#include <stdio.h>
#include <string.h>

int main(void) {
    char s1[200], s2[200], temp[400];
    int choice;

    while (1) {
        printf("\n1.Length 2.Copy 3.Concat 4.Compare 5.Reverse 6.Exit\nChoose: ");
        scanf("%d", &choice);
        getchar();
        if (choice == 6) break;

        printf("Enter first string: ");
        fgets(s1, sizeof(s1), stdin);
        s1[strcspn(s1, "\n")] = '\0';

        if (choice == 1) {
            printf("Length = %zu\n", strlen(s1));
        } else if (choice == 2) {
            strcpy(temp, s1);
            printf("Copied = %s\n", temp);
        } else if (choice == 3) {
            printf("Enter second string: ");
            fgets(s2, sizeof(s2), stdin);
            s2[strcspn(s2, "\n")] = '\0';
            strcpy(temp, s1);
            strcat(temp, s2);
            printf("Concatenated = %s\n", temp);
        } else if (choice == 4) {
            printf("Enter second string: ");
            fgets(s2, sizeof(s2), stdin);
            s2[strcspn(s2, "\n")] = '\0';
            int cmp = strcmp(s1, s2);
            if (cmp == 0) printf("Equal\n");
            else if (cmp < 0) printf("First is smaller\n");
            else printf("First is greater\n");
        } else if (choice == 5) {
            int n = (int)strlen(s1);
            strcpy(temp, s1);
            for (int i = 0, j = n - 1; i < j; i++, j--) {
                char t = temp[i];
                temp[i] = temp[j];
                temp[j] = t;
            }
            printf("Reversed = %s\n", temp);
        } else {
            printf("Invalid choice\n");
        }
    }
    return 0;
}
