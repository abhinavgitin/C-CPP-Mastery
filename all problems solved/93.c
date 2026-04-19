#include <stdio.h>
#include <string.h>

void reverse_string(char *s) {
    char *left = s;
    char *right = s + strlen(s) - 1;
    while (left < right) {
        char t = *left;
        *left = *right;
        *right = t;
        left++;
        right--;
    }
}

int main(void) {
    char s[200];
    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    reverse_string(s);
    printf("Reversed string: %s\n", s);
    return 0;
}
