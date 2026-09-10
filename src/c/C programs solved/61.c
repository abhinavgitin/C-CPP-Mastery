#include <stdio.h>

static int contains(const char *text, const char *pat) {
    int i, j;
    for (i = 0; text[i] != '\0'; i++) {
        for (j = 0; pat[j] != '\0'; j++) {
            if (text[i + j] != pat[j]) break;
        }
        if (pat[j] == '\0') return 1;
    }
    return 0;
}

int main(void) {
    char s[300], sub[120];
    printf("Enter main string: ");
    fgets(s, sizeof(s), stdin);
    printf("Enter substring: ");
    fgets(sub, sizeof(sub), stdin);

    int i = 0; while (s[i] && s[i] != '\n') i++; s[i] = '\0';
    i = 0; while (sub[i] && sub[i] != '\n') i++; sub[i] = '\0';

    printf("%s\n", contains(s, sub) ? "Substring present" : "Substring not present");
    return 0;
}
