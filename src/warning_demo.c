// #include <stdio.h>

// int main() {
//     int a = 10;
//     int b = 20;
//     int result;

//     result = a + b;

//     int unused_variable = 100;   // this should trigger a warning

//     if (a = b) {   // accidental assignment instead of comparison
//         printf("a is equal to b\n");
//     }

//     printf("Result is %d\n", result);

//     return 0;
// }
#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    int result = a + b;

    if (a == b) {   // fixed comparison
        printf("a is equal to b\n");
    }

    printf("Result is %d\n", result);

    return 0;
}
