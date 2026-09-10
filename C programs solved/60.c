#include <stdio.h>

static int my_strcmp(const char *a, const char *b) {
    int i = 0;
    while (a[i] && b[i] && a[i] == b[i]) i++;
    return (unsigned char)a[i] - (unsigned char)b[i];
}

int main(void) {
    char a[200], b[200];
    printf("Enter first string: ");
    fgets(a, sizeof(a), stdin);
    printf("Enter second string: ");
    fgets(b, sizeof(b), stdin);

    int i = 0; while (a[i] && a[i] != '\n') i++; a[i] = '\0';
    i = 0; while (b[i] && b[i] != '\n') i++; b[i] = '\0';

    int cmp = my_strcmp(a, b);
    if (cmp == 0) printf("Strings are equal\n");
    else if (cmp < 0) printf("First string is smaller\n");
    else printf("First string is greater\n");
    return 0;
}
