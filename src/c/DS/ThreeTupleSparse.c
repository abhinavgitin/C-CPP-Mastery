#include <stdio.h>

int main() {
    int row, col, nonZeroCount = 0;
    printf("Enter the row and the col for the sparse matrix : \n");
    scanf("%d%d",&row, &col);
    int mat[row][col];

    printf("Enter the values for the sparse matrix : \n");
    for ( int i = 0 ; i < row ; i++ ) {
        for ( int j = 0 ; j < col ; j++ ) {
            scanf("%d",&mat[i][j]);
            if(mat[i][j] != 0 ) {
                nonZeroCount++;
            }
        }
    }

    // for the sparse matrix we will have defined 3 rows and many coloums as possible
    int mat2[nonZeroCount][3];
    int k = 0;
    for ( int i = 0 ; i < row; i++ ) {
        for ( int j = 0 ; j < col ; j++ ) {
            if ( mat[i][j] != 0 ) {
                mat2[k][0] = i;
                mat2[k][1] = j;
                mat2[k][2] = mat[i][j];
                k++;
            }
        }
    }

    printf("The Sparse Matrix is : \n");
    for ( int i = 0 ; i < row ; i++ ) {
        printf("[ ");
        for ( int j = 0 ; j < col ; j++ ) {
            printf("%d ",mat[i][j]);
        }
        printf("]\n");
    }
    printf("\n\n");

    printf("The Compact Matrix is : \n");
    printf("Row\t");
    printf("Col\t");
    printf("Value\t\n");
    for ( int i = 0 ; i < nonZeroCount ; i++ ) {
        printf("[ ");

        printf("%d\t", mat2[i][1]);  // Column becomes Row
        printf("%d\t", mat2[i][0]);  // Row becomes Column
        printf("%d\t", mat2[i][2]);  // Value remains same

        printf("]\n");
    }

     return 0;
}

/* NOTES: 
1. The formula is the total no of the col for the compact matrix is always the total no of the non ZERO  Values
we do : count the total no of the val that is NOT ZERO*/