#include <stdio.h>
#include <string.h>

int main(void) {
    char src[200], dst1[200], dst2[200];
    printf("Enter source string: ");
    fgets(src, sizeof(src), stdin);
    src[strcspn(src, "\n")] = '\0';

    strcpy(dst1, src);  /* with function */

    int i = 0;
    while (src[i] != '\0') {
        dst2[i] = src[i];
        i++;
    }
    dst2[i] = '\0';

    printf("Copied using strcpy: %s\n", dst1);
    printf("Copied manually: %s\n", dst2);
    return 0;
}
