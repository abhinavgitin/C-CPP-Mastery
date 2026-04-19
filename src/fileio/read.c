#include <stdio.h>

int main() {
    FILE *fp;
    int ch;
    fp = fopen("assets/studnet.txt","r");
    if ( fp == NULL ) {
        printf("File Not There\n");
        return 1;
    }
    while ( ( ch = getc(fp) ) != EOF ) {
        printf("%c",ch);
    }
    printf("\n");
    return 0;
}