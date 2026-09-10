#include <stdio.h>
void star1(){
    printf("\n\n");
    for ( int i = 0 ; i < 10 ; i++ ) {
        for ( int j = 0 ; j <= i ; j++ ) {
            printf("* ");
        }
        printf("\n");
    }
}

void star2() {
    printf("\n\n");
    for ( int i = 10 ; i >= 1 ; i-- ) {
        for ( int j = i ; j >= 1 ; j-- ) {
            printf("* ");
        }
        printf("\n");
    }
}

void star3() {
    printf("\n\n");
    for (int i = 0 ; i < 10 ; i++ ) {
        for ( int j = 0 ; j < 10 - i - 1 ; j++ ) {
            printf(" ");
        }
        for ( int k = 0 ; k <= i ; k++ ) {
            printf("*");
        }
        printf("\n");
    }
}

void star4() {
    printf("\n\n");
    for ( int i = 0 ; i < 10 ; i++ ) {
        for ( int j = 0 ; j < i ; j++ ) {
            printf(" ");
        }
        for ( int k = i ; k < 10 ; k++ ) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int choice;
    printf("Enter the choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        star1();
        break;
    case 2:
        star2();
        break;
    case 3: 
        star3();
        break;
    case 4:
        star4();
        break;
    default:
        break;
    }
    return 0;
}