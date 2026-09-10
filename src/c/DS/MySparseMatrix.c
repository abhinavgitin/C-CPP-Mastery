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
    int mat2[3][nonZeroCount];
    int k = 0;
    for ( int i = 0 ; i < row; i++ ) {
        for ( int j = 0 ; j < col ; j++ ) {
            if ( mat[i][j] != 0 ) {
                mat2[0][k] = i;
                mat2[1][k] = j;
                mat2[2][k] = mat[i][j];
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
    for ( int i = 0 ; i < 3 ; i++ ) {
        ( i == 0 )? printf("Row idx\t") : ( i == 1 )? printf("Col idx\t") : printf("Value\t");
        printf("[ ");
        for ( int j = 0 ; j < nonZeroCount ; j++ ) {
            printf("%d ", mat2[i][j]);
        }
        printf("]\n");
    }

     return 0;
}

/* NOTES: 
1. The formula is the total no of the col for the compact matrix is always the total no of the non ZERO  Values
we do : count the total no of the val that is NOT ZERO*/