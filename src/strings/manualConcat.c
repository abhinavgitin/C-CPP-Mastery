#include <stdio.h>
int main() {
    char source[20] = "Abhinav Puri"; // this is the source string
    char destination[40] = "Hello "; // this is the destination string
    int i = 0, j = 0;
    while ( destination[i] != '\0' ) {
        i++; // we increment the index to move to the end of the destination string
    }
    while ( source[j] != '\0' ) {
        destination[i] = source[j]; // we copy here each character "From source to destination"
        i++, j++;
    }
    printf("%s\n", destination);
    return 0;
}