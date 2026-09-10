#include <stdio.h>

int main(void) {
    int p, c, b;
    printf("Enter marks in Physics Chemistry Biology: ");
    scanf("%d %d %d", &p, &c, &b);
    int avg = (p + c + b) / 3;
    int bucket = avg / 10;
    printf("Average = %d\nGrade = ", avg);
    switch (bucket) {
        case 10:
        case 9: printf("S\n"); break;
        case 8: printf("A\n"); break;
        case 7: printf("B\n"); break;
        case 6: printf("C\n"); break;
        case 5: printf("D\n"); break;
        case 4: printf("E\n"); break;
        default: printf("F\n"); break;
    }
    return 0;
}
