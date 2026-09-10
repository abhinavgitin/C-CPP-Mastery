#include <stdio.h>

int main() {
    FILE *fp;
    int ch;
    fp = fopen("assets/output.txt","w");
    if ( fp == NULL ) {
        printf("The file is not there\n");
        return 1;
    }
    printf("Write into the file here : \n");
    while ( ( ch = getchar() ) != EOF ) {
        fputc(ch,fp);
    }
    fclose(fp);
    printf("============================\n");
    printf("The file contains are : \n");
    fp = fopen("assets/output.txt","r");
    while ( ( ch = fgetc(fp) ) != EOF ) {
        printf("%c",ch);
    }
    printf("\n\n");
    return 0;
}