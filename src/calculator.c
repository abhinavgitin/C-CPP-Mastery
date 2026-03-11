#include <stdio.h>
#include <stdbool.h>
int main() {
    // use switch case to perform basic calculator operations
    while ( true ) {
        int i;
        printf("Enter 1 for Exit and 2 for continue: ");
        scanf("%d", &i);
        if ( i == 1 ) {
            break;
        }
        /* in lab i did char c
        printf("Enter E for exit or y for continue") 
        if ( c == 'E ' || c == 'e' ) break;
        and this was not getting executed and the loop run forever until ctrl +c in the terminal so why is this hapenning? whats the reason ?
        this was a experiment done my me*/
        int choice, a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Choose operation: \n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Sum of %d and %d is %d\n", a, b, a + b);
            break;
        case 2:
            printf("Difference of %d and %d is %d\n", a, b, a - b);
            break;
        case 3:
            printf("Product of %d and %d is %d\n", a, b, a * b);
            break;
        case 4:
            if (b != 0) {
                printf("Quotient of %d and %d is %.2f\n", a, b, (float)a / b);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice! Please select a valid operation.\n");
    }
    }
}