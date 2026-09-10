#include <stdio.h>
#include <string.h>

int main(void) {
    char s[200];
    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    printf("Length = %zu\n", strlen(s));
    return 0;
}
