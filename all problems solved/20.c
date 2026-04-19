#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);
    ch = (char)tolower((unsigned char)ch);
    int isVowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    printf("%c is %s\n", ch, isVowel ? "Vowel" : "Consonant");
    return 0;
}
