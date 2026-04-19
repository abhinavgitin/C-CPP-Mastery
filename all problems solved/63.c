#include <stdio.h>
#include <string.h>

int main(void) {
    char s[200], r[200];
    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    strcpy(r, s);
    int n = (int)strlen(r);
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        char t = r[i]; r[i] = r[j]; r[j] = t;
    }
    printf("Reversed = %s\n", r);
    printf("Palindrome? %s\n", strcmp(s, r) == 0 ? "Yes" : "No");
    return 0;
}
