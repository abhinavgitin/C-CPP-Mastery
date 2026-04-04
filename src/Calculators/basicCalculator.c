#include <stdio.h>

int userInput() {
    int number;
    printf("Enter the number ");
    scanf("%d", &number);
    return number;
}
int addition( int a, int b ){
    return a + b;
}
int subtraction( int a, int b ){
    return a - b;
}
int multiplication( int a, int b ){
    return a * b;
}
int division( int a, int b ){
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero\n");
        return 0; // or handle error as needed
    }
}

int main() {
    
    int a = 0;
    int b = 0;
    printf("Enter 1 for addition, 2 for subtraction 3 for multiplication and 4 for division: ");
    int choice;
    scanf("%d", &choice);
    if (choice == 1) {
        int a = userInput();
        int b = userInput();
        printf("Result: %d\n", addition(a, b));
    } else if (choice == 2) {
        int a = userInput();
        int b = userInput();
        printf("Result: %d\n", subtraction(a, b));
    } else if (choice == 3) {
        int a = userInput();
        int b = userInput();
        printf("Result: %d\n", multiplication(a, b));
    } else if (choice == 4) {
        int a = userInput();
        int b = userInput();
        printf("Result: %d\n", division(a, b));
    } else {
        printf("Invalid choice\n");
    }
    return 0;
}