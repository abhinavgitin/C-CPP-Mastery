#include <stdio.h>

int main() {
    int sum = 0, length; // as usual we initilize the variable
    int *n = &length;
    int *pSum = &sum; // connect the variables with the pointers
    printf("Enter the number till where you want the sum of : ");
    scanf("%d", &length);
    for ( int i = 1 ; i <= *n ; i++ ) { // we add till the index that was given "Importnt"
        *pSum += i;
    }
    printf("The sum of the number is %d\n", *pSum); // now access the stored pointerSum
    printf("The sum of the number is %d\n", sum); // now access the stored sum 
    /* Note that when we change the values of the pointer the value of the actual conneccted variable also changes*/
    
    return 0;
}