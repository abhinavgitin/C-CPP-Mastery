#include <stdio.h>
int main()
{
    int r1, r2, c1, c2, i, j, k;
    printf("Enter the size of the row and the col of the first matrix : ");
    scanf("%d %d", &r1, &c1);
    int mat1[r1][c1];
    printf("Enter the size of the row and the col of the second matrix : ");
    scanf("%d %d", &r2, &c2);
    int mat2[r2][c2];
    if (c1 != r2)
    {
        printf("Matrix multiplication is not possible \n");
        return 0;
    }
    printf("Please eneter the array Elements :\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Please eneter the array Elements  for second matrix :\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    int mat3[r1][c2];
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            mat3[i][j] = 0;
            for (k = 0; k < c1; k++)
            {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    for (i = 0; i < r1; i++)
    {   printf("\t[ ");
        for (j = 0; j < c2; j++)
        {
            printf("%3d ", mat3[i][j]);
        }
        printf(" ]\n");
    }
    printf("\n");
}