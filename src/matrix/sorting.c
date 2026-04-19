#include <stdio.h>

int main()
{
    int matrix[][5] = {
        {1, 2, 3, 4, 5},
        {3, 2, 1, 1, 1},
        {3, 5, 7, 8, 9},
        {3, 9, 0, 8, 7}};
    // length of the matrix
    int rowLength = sizeof(matrix) / sizeof(matrix[0]);
    int colLength = sizeof(matrix[0]) / sizeof(matrix[0][0]); // meaning the 0th rows 0th colm
    for (int i = 0; i < rowLength; i++)
    {
        printf("\n[");
        for (int j = 0; j < colLength; j++)
        {
            printf("%3d", matrix[i][j]);
        }
        printf(" ]\n");
    }
    for (int i = 0; i < rowLength; i++)
    {
        for (int j = 0; j < colLength - 1; j++)
        {
            for (int k = 0; k < colLength - j - 1; k++)
            {
                if (matrix[i][k] > matrix[i][k + 1])
                {
                    matrix[i][k] = matrix[i][k] + matrix[i][k + 1];
                    matrix[i][k + 1] = matrix[i][k] - matrix[i][k + 1];
                    matrix[i][k] = matrix[i][k] - matrix[i][k + 1];
                }
            }
        }
    }
    printf("\n\nThe result matrix is \n");
    for (int i = 0; i < rowLength; i++)
    {
        printf("\n[");
        for (int j = 0; j < colLength; j++)
        {
            printf("%3d", matrix[i][j]);
        }
        printf(" ]\n");
    }
    return 0;
}