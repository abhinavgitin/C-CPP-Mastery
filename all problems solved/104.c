#include <stdio.h>

int main(void) {
    FILE *fp = fopen("my_c_file", "w");
    if (fp == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }
    fputs("SIKKIM MANIPAL INSTITUTE OF TECHNOLOGY", fp);
    fclose(fp);
    printf("Data written to my_c_file\n");
    return 0;
}
