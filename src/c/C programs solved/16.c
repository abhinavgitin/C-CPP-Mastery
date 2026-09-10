#include <stdio.h>

int main(void) {
    int choice;
    double val;
    printf("1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\nChoose: ");
    scanf("%d", &choice);
    printf("Enter value: ");
    scanf("%lf", &val);
    if (choice == 1) {
        printf("Fahrenheit = %.2lf\n", (val * 9.0 / 5.0) + 32.0);
    } else if (choice == 2) {
        printf("Celsius = %.2lf\n", (val - 32.0) * 5.0 / 9.0);
    } else {
        printf("Invalid choice.\n");
    }
    return 0;
}
