#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void clear_screen()
{
    system("cls");
}
void input(int row, int col, int mat[row][col])
{
    printf("Please eneter the array Elements :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}
void print(int row, int col, int mat[row][col])
{
    printf("\t Array Elements : \n");
    for (int i = 0; i < row; i++)
    {
        printf("\t[ ");
        for (int j = 0; j < col; j++)
        {
            printf("%3d ", mat[i][j]);
        }
        printf(" ]\n");
    }
    printf("\n");
}
void addition(int row, int col, int mat1[row][col], int mat2[row][col])
{
    int ans[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            ans[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    print(row, col, ans);
}
void subtraction(int row, int col, int mat1[row][col], int mat2[row][col])
{
    int ans[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            ans[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
    print(row, col, ans);
}
void multiplication(int row, int col, int row2, int col2, int mat1[row][col], int mat2[row2][col2])
{
    int ans[row][col2];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            ans[i][j] = 0;
            for (int k = 0; k < col; k++)
            {
                ans[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    print(row, col2, ans);
}
void division(int row, int col, int mat1[row][col], int mat2[row][col])
{
    int ans[row][col]; // make sure for the inut we take is now in intiger and the ans will be in integer even if we are ddoing the ddivision
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (mat2[i][j] == 0)
            {
                printf("Division by zero at [%d][%d]\n", i, j);
                return;
            }
            ans[i][j] = mat1[i][j] / mat2[i][j]; // this is not the real divison still we do this
        }
    }
    print(row, col, ans);
}
void searching(int row, int col, int mat1[row][col], int target)
{
    bool found = false;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (mat1[i][j] == target)
            {
                printf("Target found at row = %d and col = %d\n", i, j);
                found = true;
                break;
            }
        }
        if (found)
            break;
    }
}
void sorting(int row, int col, int mat1[row][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col - 1; j++)
        {
            for (int k = 0; k < col - j - 1; k++)
            {
                if (mat1[i][k] > mat1[i][k + 1])
                {
                    int temp = mat1[i][k];
                    mat1[i][k] = mat1[i][k + 1];
                    mat1[i][k + 1] = temp;
                }
            }
        }
    }
    print(row, col, mat1);
}
int main()
{
    int choice = -1;
    int r1, c1, r2, c2;
    while (choice != 0)
    {
        clear_screen();
        printf("\n");
        printf("  ========================================================\n");
        printf("          2D ARRAY TOOLKIT by Abhinav                     \n");
        printf("  ========================================================\n");
        printf("  1. Addition\n");
        printf("  2. Subtraction\n");
        printf("  3. Multiplication\n");
        printf("  4. Division\n");
        printf("  5. Searching\n");
        printf("  6. Sorting\n");
        printf("  0. Exit\n");
        printf("  Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {

            // here problem even if you thnk that the arr for each of the cases will be created no it wont cause we run the switch cases
            // so for each one cases only one 2d array will be genereated so we have free power to make arrays as per the operion needed;
            char ch = 'y';
            while (ch == 'y')
            {
                printf("Enter the size of the row and col for the matrix 1 : ");
                scanf("%d %d", &r1, &c1);
                getchar(); // clears the buffer!
                printf("Enter the size of the row and col for the matrix 2 : ");
                scanf("%d %d", &r2, &c2);
                getchar();
                if (r1 != r2 || c1 != c2)
                {
                    printf("The addition for the matrixes must have same col and same row sizes \n");
                    printf("Do you want to enter the values again ? y : n : ");
                    scanf(" %c", &ch);
                }
                else
                {
                    int mat1[r1][c1], mat2[r2][c2];
                    input(r1, c1, mat1);
                    input(r2, c2, mat2);
                    addition(r1, c1, mat1, mat2);
                    break; // cause we are done with the addition part if the user wants to do it once more we exit the loop and then
                    // continue with the fresh choice
                }
            }
            break;
        }
        case 2:
        {

            char ch = 'y';
            while (ch == 'y')
            {
                printf("Enter the size of the row and col for the matrix 1 : ");
                scanf("%d %d", &r1, &c1);
                getchar();
                printf("Enter the size of the row and col for the matrix 2 : ");
                scanf("%d %d", &r2, &c2);
                getchar();
                if (r1 != r2 || c1 != c2)
                {
                    printf("The Subtraction for the matrixes must have same col and same row sizes \n");
                    printf("Do you want to enter the values again ? y : n : ");
                    scanf(" %c", &ch);
                }
                else
                {
                    int mat1[r1][c1], mat2[r2][c2];
                    input(r1, c1, mat1);
                    input(r2, c2, mat2);
                    subtraction(r1, c1, mat1, mat2);
                    break;
                }
            }
            break;
        }
        case 3:
        {
            char ch = 'y';
            while (ch == 'y')
            {
                printf("Enter the size of the row and col for the matrix 1 : ");
                scanf("%d %d", &r1, &c1);
                getchar();
                printf("Enter the size of the row and col for the matrix 2 : ");
                scanf("%d %d", &r2, &c2);
                getchar();
                if (c1 != r2)
                {
                    printf("The Multiplication for the first matrixes col must be same for the second matrixes row \n");
                    printf("Do you want to enter the values again ? y : n : ");
                    scanf(" %c", &ch);
                }
                else
                {
                    int mat1[r1][c1], mat2[r2][c2];
                    input(r1, c1, mat1);
                    input(r2, c2, mat2);
                    multiplication(r1, c1, r2, c2, mat1, mat2);
                    break;
                }
            }

            break;
        }
        case 4:
        {
            char ch = 'y';
            while (ch == 'y')
            {
                printf("Enter the size of the row and col for the matrix 1 : ");
                scanf("%d %d", &r1, &c1);
                getchar();
                printf("Enter the size of the row and col for the matrix 2 : ");
                scanf("%d %d", &r2, &c2);
                getchar();
                if (r1 != r2 || c1 != c2)
                {
                    printf("The Division for the matrixes must have same col and same row sizes \n");
                    printf("Do you want to enter the values again ? y : n : ");
                    scanf(" %c", &ch);
                }
                else
                {
                    int mat1[r1][c1], mat2[r2][c2];
                    input(r1, c1, mat1);
                    input(r2, c2, mat2);
                    division(r1, c1, mat1, mat2);
                    break;
                }
            }

            break;
        }
        case 5:
        {

            printf("Enter the size of the row and col for the matrix : ");
            scanf("%d %d", &r1, &c1);
            getchar();
            int mat1[r1][c1];
            input(r1, c1, mat1);
            printf("Enter the target you want to find in the matrix : ");
            int target;
            scanf("%d", &target);
            getchar();
            searching(r1, c1, mat1, target);
            break;
        }
        case 6:
        {

            printf("Enter the size of the row and col for the matrix : ");
            scanf("%d %d", &r1, &c1);
            getchar();
            int mat1[r1][c1];
            input(r1, c1, mat1);
            sorting(r1, c1, mat1);
            break;
        }
        case 0:
            return 0;
        default:
            break;
        }
        printf("Do you wish to continue? y : n ?");
        char c;
        scanf(" %c", &c);
        if (c != 'y')
        {
            break;
        }
    }
}