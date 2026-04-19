#include <stdio.h>

int main(void) {
    int p, c, b;
    printf("Enter marks in Physics Chemistry Biology: ");
    scanf("%d %d %d", &p, &c, &b);
    int avg = (p + c + b) / 3;
    printf("Average = %d\n", avg);
    if (avg >= 90) printf("Grade S\n");
    else if (avg >= 80) printf("Grade A\n");
    else if (avg >= 70) printf("Grade B\n");
    else if (avg >= 60) printf("Grade C\n");
    else if (avg >= 50) printf("Grade D\n");
    else if (avg >= 40) printf("Grade E\n");
    else printf("Grade F\n");
    return 0;
}
