#include <stdio.h>

int main(void) {
    FILE *fp = fopen("my_C_file", "r");
    if (fp == NULL) {
        printf("Unable to open file my_C_file.\n");
        return 1;
    }

    char ch;
    printf("File content:\n");
    while ((ch = (char)fgetc(fp)) != EOF) {
        putchar(ch);
    }
    putchar('\n');

    fclose(fp);
    return 0;
}
