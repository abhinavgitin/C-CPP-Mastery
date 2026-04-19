#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);
    ch = (char)tolower((unsigned char)ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("Vowel\n");
    } else {
        printf("Consonant\n");
    }
    return 0;
}
