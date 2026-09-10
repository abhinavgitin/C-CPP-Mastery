#include <stdio.h>

static int my_strlen(const char *s) {
    int n = 0;
    while (s[n] != '\0' && s[n] != '\n') n++;
    return n;
}

static void my_strcpy(char *dst, const char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
}

static void my_strcat(char *dst, const char *src) {
    int i = my_strlen(dst);
    int j = 0;
    while (src[j] != '\0') dst[i++] = src[j++];
    dst[i] = '\0';
}

static int my_strcmp(const char *a, const char *b) {
    int i = 0;
    while (a[i] && b[i] && a[i] == b[i]) i++;
    return (unsigned char)a[i] - (unsigned char)b[i];
}

static void my_strrev(char *s) {
    int i = 0, j = my_strlen(s) - 1;
    while (i < j) {
        char t = s[i];
        s[i] = s[j];
        s[j] = t;
        i++;
        j--;
    }
}

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
        int n1 = my_strlen(s1);
        s1[n1] = '\0';

        if (choice == 1) {
            printf("Length = %d\n", my_strlen(s1));
        } else if (choice == 2) {
            my_strcpy(temp, s1);
            printf("Copied string = %s\n", temp);
        } else if (choice == 3) {
            printf("Enter second string: ");
            fgets(s2, sizeof(s2), stdin);
            int n2 = my_strlen(s2);
            s2[n2] = '\0';
            my_strcpy(temp, s1);
            my_strcat(temp, s2);
            printf("Concatenated = %s\n", temp);
        } else if (choice == 4) {
            printf("Enter second string: ");
            fgets(s2, sizeof(s2), stdin);
            int n2 = my_strlen(s2);
            s2[n2] = '\0';
            int cmp = my_strcmp(s1, s2);
            if (cmp == 0) printf("Strings are equal\n");
            else if (cmp < 0) printf("First string is smaller\n");
            else printf("First string is greater\n");
        } else if (choice == 5) {
            my_strcpy(temp, s1);
            my_strrev(temp);
            printf("Reversed = %s\n", temp);
        } else {
            printf("Invalid choice\n");
        }
    }
    return 0;
}
