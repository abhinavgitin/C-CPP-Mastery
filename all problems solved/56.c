#include <stdio.h>

    int main(void) {
        char str[100];
        char ch;
        printf("Enter a string (for puts): ");
        fgets(str, sizeof(str), stdin);
        puts("Using puts:");
        puts(str);

        printf("Enter one character (for getchar): ");
        ch = (char)getchar();
        printf("Using putchar: ");
        putchar(ch);
        putchar('
');
        return 0;
    }
