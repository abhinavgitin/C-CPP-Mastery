#include <stdio.h>
#include <ctype.h>

int main(void) {
    char s[300], *p;
    int vowels = 0, consonants = 0;
    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);

    p = s;
    while (*p != '\0') {
        if (isalpha((unsigned char)*p)) {
            char ch = (char)tolower((unsigned char)*p);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') vowels++;
            else consonants++;
        }
        p++;
    }

    printf("Vowels = %d\nConsonants = %d\n", vowels, consonants);
    return 0;
}
