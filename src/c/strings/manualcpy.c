#include <stdio.h>
int main() {
    char str1[20] = "Abhinav"; // this is the destination string
    char str2[20] = "Puri is a coder"; // this is the source string
    int i = 0;
    while (str2[i] != '\0') {
        str1[i] = str2[i]; // we copy here each character "From str2 to str1"
        i++; // and then inccrement the index to move to the next character
    }
    printf("%s\n", str1);
    return 0;
}