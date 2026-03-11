/*
 * ============================================================
 *   2D Array Toolkit — Matrix Operations
 *   Author  : Abhinav
 *   Ops     : Add | Sub | Mul | Div(scalar) | Transpose
 *             Row/Col Sum & Mean | Sort rows | Search
 *   Rule    : Every operation = separate input + logic + output
 * ============================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <float.h>

#define MAX 10

/* ============================================================
 *  GLOBAL MODE  0 = int,  1 = float
 * ============================================================ */
int mode = 0;

/* ============================================================
 *  UTILITY
 * ============================================================ */
void clear_screen(void)
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void pause_screen(void)
{
    printf("\n  Press ENTER to continue...");
    while (getchar() != '\n')
        ;
    getchar();
}

void divider(void) { printf("  --------------------------------------------------------\n"); }

void header(const char *t)
{
    printf("\n");
    divider();
    printf("  %s\n", t);
    divider();
}

/* ============================================================
 *  SECTION 0 — SHARED MATRIX INPUT / OUTPUT
 * ============================================================ */

/* Generic input — fills matrix A of size r x c */
void matrix_input(double A[MAX][MAX], int r, int c, const char *name)
{
    printf("  Enter elements of Matrix %s (%d x %d):\n", name, r, c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
        {
            printf("    [%d][%d] = ", i, j);
            if (mode == 0)
            {
                int v;
                scanf("%d", &v);
                A[i][j] = v;
            }
            else
                scanf("%lf", &A[i][j]);
        }
}

/* Dimension input */
void dim_input(int *r, int *c, const char *label)
{
    printf("  %s — rows cols: ", label);
    scanf("%d %d", r, c);
}

/* Generic output */
void matrix_output(double A[MAX][MAX], int r, int c, const char *label)
{
    printf("\n  [ %s ]\n", label);
    for (int i = 0; i < r; i++)
    {
        printf("    ");
        for (int j = 0; j < c; j++)
        {
            if (mode == 0)
                printf("%8d", (int)A[i][j]);
            else
                printf("%10.3f", A[i][j]);
        }
        printf("\n");
    }
}

/* Copy matrix */
void matrix_copy(double src[MAX][MAX], double dst[MAX][MAX], int r, int c)
{
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            dst[i][j] = src[i][j];
}

/* ============================================================
 *  SECTION 1 — ADDITION
 * ============================================================ */
void add_input(double A[MAX][MAX], double B[MAX][MAX], int *r, int *c)
{
    dim_input(r, c, "Matrix size (must match)");
    matrix_input(A, *r, *c, "A");
    matrix_input(B, *r, *c, "B");
}

void add_logic(double A[MAX][MAX], double B[MAX][MAX],
               double C[MAX][MAX], int r, int c)
{
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            C[i][j] = A[i][j] + B[i][j];
}

void add_output(double A[MAX][MAX], double B[MAX][MAX],
                double C[MAX][MAX], int r, int c)
{
    matrix_output(A, r, c, "Matrix A");
    matrix_output(B, r, c, "Matrix B");
    matrix_output(C, r, c, "A + B");
}

/* ============================================================
 *  SECTION 2 — SUBTRACTION
 * ============================================================ */
void sub_input(double A[MAX][MAX], double B[MAX][MAX], int *r, int *c)
{
    dim_input(r, c, "Matrix size (must match)");
    matrix_input(A, *r, *c, "A");
    matrix_input(B, *r, *c, "B");
}

void sub_logic(double A[MAX][MAX], double B[MAX][MAX],
               double C[MAX][MAX], int r, int c)
{
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            C[i][j] = A[i][j] - B[i][j];
}

void sub_output(double A[MAX][MAX], double B[MAX][MAX],
                double C[MAX][MAX], int r, int c)
{
    matrix_output(A, r, c, "Matrix A");
    matrix_output(B, r, c, "Matrix B");
    matrix_output(C, r, c, "A - B");
}

/* ============================================================
 *  SECTION 3 — MULTIPLICATION
 * ============================================================ */
void mul_input(double A[MAX][MAX], double B[MAX][MAX],
               int *rA, int *cA, int *rB, int *cB)
{
    printf("  Matrix A — rows cols: ");
    scanf("%d %d", rA, cA);
    printf("  Matrix B — rows cols: ");
    scanf("%d %d", rB, cB);
    while (*cA != *rB)
    {
        printf("  [!] Cols of A must equal Rows of B. Re-enter B dims: ");
        scanf("%d %d", rB, cB);
    }
    matrix_input(A, *rA, *cA, "A");
    matrix_input(B, *rB, *cB, "B");
}

void mul_logic(double A[MAX][MAX], double B[MAX][MAX],
               double C[MAX][MAX], int rA, int cA, int cB)
{
    for (int i = 0; i < rA; i++)
        for (int j = 0; j < cB; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < cA; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
}

void mul_output(double A[MAX][MAX], double B[MAX][MAX],
                double C[MAX][MAX], int rA, int cA, int rB, int cB)
{
    matrix_output(A, rA, cA, "Matrix A");
    matrix_output(B, rB, cB, "Matrix B");
    matrix_output(C, rA, cB, "A x B");
}

/* ============================================================
 *  SECTION 4 — SCALAR DIVISION
 * ============================================================ */
void div_input(double A[MAX][MAX], int *r, int *c, double *scalar)
{
    dim_input(r, c, "Matrix size");
    matrix_input(A, *r, *c, "A");
    printf("  Enter scalar divisor: ");
    if (mode == 0)
    {
        int v;
        scanf("%d", &v);
        *scalar = v;
    }
    else
        scanf("%lf", scalar);
    while (*scalar == 0.0)
    {
        printf("  [!] Divisor cannot be zero. Re-enter: ");
        if (mode == 0)
        {
            int v;
            scanf("%d", &v);
            *scalar = v;
        }
        else
            scanf("%lf", scalar);
    }
}

void div_logic(double A[MAX][MAX], double C[MAX][MAX],
               int r, int c, double scalar)
{
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            C[i][j] = A[i][j] / scalar;
}

void div_output(double A[MAX][MAX], double C[MAX][MAX],
                int r, int c, double scalar)
{
    matrix_output(A, r, c, "Matrix A");
    if (mode == 0)
        printf("\n  Scalar divisor : %d\n", (int)scalar);
    else
        printf("\n  Scalar divisor : %.3f\n", scalar);
    matrix_output(C, r, c, "A / scalar");
}

/* ============================================================
 *  SECTION 5 — TRANSPOSE
 * ============================================================ */
void transpose_input(double A[MAX][MAX], int *r, int *c)
{
    dim_input(r, c, "Matrix size");
    matrix_input(A, *r, *c, "A");
}

void transpose_logic(double A[MAX][MAX], double T[MAX][MAX], int r, int c)
{
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            T[j][i] = A[i][j];
}

void transpose_output(double A[MAX][MAX], double T[MAX][MAX], int r, int c)
{
    matrix_output(A, r, c, "Original Matrix");
    matrix_output(T, c, r, "Transposed Matrix");
}

/* ============================================================
 *  SECTION 6 — ROW / COLUMN SUM & MEAN
 * ============================================================ */
void stats_input(double A[MAX][MAX], int *r, int *c)
{
    dim_input(r, c, "Matrix size");
    matrix_input(A, *r, *c, "A");
}

void stats_logic_rows(double A[MAX][MAX], int r, int c,
                      double row_sum[MAX], double row_mean[MAX])
{
    for (int i = 0; i < r; i++)
    {
        row_sum[i] = 0;
        for (int j = 0; j < c; j++)
            row_sum[i] += A[i][j];
        row_mean[i] = row_sum[i] / c;
    }
}

void stats_logic_cols(double A[MAX][MAX], int r, int c,
                      double col_sum[MAX], double col_mean[MAX])
{
    for (int j = 0; j < c; j++)
    {
        col_sum[j] = 0;
        for (int i = 0; i < r; i++)
            col_sum[j] += A[i][j];
        col_mean[j] = col_sum[j] / r;
    }
}

void stats_output(double A[MAX][MAX], int r, int c,
                  double row_sum[MAX], double row_mean[MAX],
                  double col_sum[MAX], double col_mean[MAX])
{
    matrix_output(A, r, c, "Matrix A");

    printf("\n  %-10s  %-12s  %-12s\n", "Row", "Sum", "Mean");
    divider();
    for (int i = 0; i < r; i++)
        printf("  Row %-6d  %-12.3f  %-12.3f\n", i, row_sum[i], row_mean[i]);

    printf("\n  %-10s  %-12s  %-12s\n", "Column", "Sum", "Mean");
    divider();
    for (int j = 0; j < c; j++)
        printf("  Col %-6d  %-12.3f  %-12.3f\n", j, col_sum[j], col_mean[j]);
}

/* ============================================================
 *  SECTION 7 — SORTING (each row independently)
 *  Algorithms: Bubble | Selection | Insertion
 * ============================================================ */
void sort2d_input(double A[MAX][MAX], int *r, int *c)
{
    dim_input(r, c, "Matrix size");
    matrix_input(A, *r, *c, "A");
}

/* Sort a single row using bubble sort */
void bubble_row(double row[], int c)
{
    for (int i = 0; i < c - 1; i++)
        for (int j = 0; j < c - i - 1; j++)
            if (row[j] > row[j + 1])
            {
                double t = row[j];
                row[j] = row[j + 1];
                row[j + 1] = t;
            }
}

/* Sort a single row using selection sort */
void selection_row(double row[], int c)
{
    for (int i = 0; i < c - 1; i++)
    {
        int mi = i;
        for (int j = i + 1; j < c; j++)
            if (row[j] < row[mi])
                mi = j;
        double t = row[i];
        row[i] = row[mi];
        row[mi] = t;
    }
}

/* Sort a single row using insertion sort */
void insertion_row(double row[], int c)
{
    for (int i = 1; i < c; i++)
    {
        double key = row[i];
        int j = i - 1;
        while (j >= 0 && row[j] > key)
        {
            row[j + 1] = row[j];
            j--;
        }
        row[j + 1] = key;
    }
}

/* Apply a chosen sort to every row of the matrix */
void sort2d_logic(double A[MAX][MAX], double S[MAX][MAX],
                  int r, int c, int algo)
{
    matrix_copy(A, S, r, c);
    for (int i = 0; i < r; i++)
    {
        if (algo == 1)
            bubble_row(S[i], c);
        else if (algo == 2)
            selection_row(S[i], c);
        else
            insertion_row(S[i], c);
    }
}

void sort2d_output(double A[MAX][MAX], double S[MAX][MAX],
                   int r, int c, const char *algo_name)
{
    matrix_output(A, r, c, "Original Matrix");
    char label[64];
    snprintf(label, sizeof(label), "Row-Sorted (%s)", algo_name);
    matrix_output(S, r, c, label);
}

/* ============================================================
 *  SECTION 8 — SEARCHING across full matrix
 *  Linear + Row-wise Binary (each row sorted first)
 * ============================================================ */
void search2d_input(double A[MAX][MAX], int *r, int *c, double *target)
{
    dim_input(r, c, "Matrix size");
    matrix_input(A, *r, *c, "A");
    printf("  Enter target to search: ");
    if (mode == 0)
    {
        int v;
        scanf("%d", &v);
        *target = v;
    }
    else
        scanf("%lf", target);
}

/* Linear: scan every cell */
void linear_search2d(double A[MAX][MAX], int r, int c,
                     double target, int *found_r, int *found_c)
{
    *found_r = *found_c = -1;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (A[i][j] == target)
            {
                *found_r = i;
                *found_c = j;
                return;
            }
}

/* Binary on a single sorted row */
int binary_in_row(double row[], int c, double target)
{
    int lo = 0, hi = c - 1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (row[mid] == target)
            return mid;
        else if (row[mid] < target)
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    return -1;
}

/* Binary search row by row (sort each row first) */
void binary_search2d(double A[MAX][MAX], int r, int c,
                     double target, int *found_r, int *found_c)
{
    *found_r = *found_c = -1;
    double tmp[MAX];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            tmp[j] = A[i][j];
        insertion_row(tmp, c); /* sort row copy */
        int col = binary_in_row(tmp, c, target);
        if (col != -1)
        {
            *found_r = i;
            *found_c = col;
            return;
        }
    }
}

void search2d_output(double A[MAX][MAX], int r, int c, double target,
                     int lr, int lc, int br, int bc)
{
    matrix_output(A, r, c, "Matrix A");

    /* Linear result */
    printf("\n  [Linear Search] ");
    if (lr == -1)
        if (mode == 0)
            printf("  %d not found.\n", (int)target);
        else
            printf("  %.3f not found.\n", target);
    else if (mode == 0)
        printf("  %d found at [%d][%d]\n", (int)target, lr, lc);
    else
        printf("  %.3f found at [%d][%d]\n", target, lr, lc);

    /* Binary result */
    printf("  [Binary Search] ");
    if (br == -1)
        if (mode == 0)
            printf("  %d not found.\n", (int)target);
        else
            printf("  %.3f not found.\n", target);
    else if (mode == 0)
        printf("  %d found in row %d (sorted position col %d)\n",
               (int)target, br, bc);
    else
        printf("  %.3f found in row %d (sorted position col %d)\n",
               target, br, bc);
}

/* ============================================================
 *  MENUS
 * ============================================================ */

void menu_arith(void)
{
    int ch;
    double A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    int r, c, rA, cA, rB, cB;
    double scalar;

    do
    {
        header("ARITHMETIC ON 2D ARRAYS");
        printf("  1. Addition\n  2. Subtraction\n  3. Multiplication\n");
        printf("  4. Scalar Division\n  0. Back\n  Choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            header("ADDITION");
            add_input(A, B, &r, &c);
            add_logic(A, B, C, r, c);
            add_output(A, B, C, r, c);
            break;
        case 2:
            header("SUBTRACTION");
            sub_input(A, B, &r, &c);
            sub_logic(A, B, C, r, c);
            sub_output(A, B, C, r, c);
            break;
        case 3:
            header("MULTIPLICATION");
            mul_input(A, B, &rA, &cA, &rB, &cB);
            mul_logic(A, B, C, rA, cA, cB);
            mul_output(A, B, C, rA, cA, rB, cB);
            break;
        case 4:
            header("SCALAR DIVISION");
            div_input(A, &r, &c, &scalar);
            div_logic(A, C, r, c, scalar);
            div_output(A, C, r, c, scalar);
            break;
        case 0:
            break;
        default:
            printf("  [!] Invalid.\n");
        }
        if (ch != 0)
            pause_screen();
    } while (ch != 0);
}

void menu_transpose(void)
{
    double A[MAX][MAX], T[MAX][MAX];
    int r, c;
    header("TRANSPOSE");
    transpose_input(A, &r, &c);
    transpose_logic(A, T, r, c);
    transpose_output(A, T, r, c);
    pause_screen();
}

void menu_stats(void)
{
    double A[MAX][MAX];
    double row_sum[MAX], row_mean[MAX], col_sum[MAX], col_mean[MAX];
    int r, c;
    header("ROW / COLUMN STATISTICS");
    stats_input(A, &r, &c);
    stats_logic_rows(A, r, c, row_sum, row_mean);
    stats_logic_cols(A, r, c, col_sum, col_mean);
    stats_output(A, r, c, row_sum, row_mean, col_sum, col_mean);
    pause_screen();
}

void menu_sort(void)
{
    double A[MAX][MAX], S[MAX][MAX];
    int r, c, ch;

    do
    {
        header("SORTING — EACH ROW");
        printf("  1. Bubble Sort\n  2. Selection Sort\n  3. Insertion Sort\n");
        printf("  4. All three (compare)\n  0. Back\n  Choice: ");
        scanf("%d", &ch);

        if (ch >= 1 && ch <= 4)
        {
            sort2d_input(A, &r, &c);
            if (ch == 4)
            {
                sort2d_logic(A, S, r, c, 1);
                sort2d_output(A, S, r, c, "Bubble");
                sort2d_logic(A, S, r, c, 2);
                sort2d_output(A, S, r, c, "Selection");
                sort2d_logic(A, S, r, c, 3);
                sort2d_output(A, S, r, c, "Insertion");
            }
            else
            {
                const char *names[] = {"", "Bubble", "Selection", "Insertion"};
                sort2d_logic(A, S, r, c, ch);
                sort2d_output(A, S, r, c, names[ch]);
            }
            pause_screen();
        }
        else if (ch != 0)
            printf("  [!] Invalid.\n");
    } while (ch != 0);
}

void menu_search(void)
{
    double A[MAX][MAX], target;
    int r, c, lr, lc, br, bc;
    header("SEARCHING ACROSS 2D ARRAY");
    search2d_input(A, &r, &c, &target);
    linear_search2d(A, r, c, target, &lr, &lc);
    binary_search2d(A, r, c, target, &br, &bc);
    search2d_output(A, r, c, target, lr, lc, br, bc);
    pause_screen();
}

/* ============================================================
 *  MAIN
 * ============================================================ */
int main(void)
{
    int ch;

    /* Choose data type once */
    clear_screen();
    header("2D ARRAY TOOLKIT — Data Type");
    printf("  1. Integers\n  2. Floats\n  Choice: ");
    scanf("%d", &ch);
    mode = (ch == 2) ? 1 : 0;

    do
    {
        clear_screen();
        printf("\n");
        printf("  ========================================================\n");
        printf("      2D ARRAY TOOLKIT  —  by Abhinav                     \n");
        printf("      Mode: %s\n", mode ? "Float" : "Integer");
        printf("  ========================================================\n");
        printf("  1. Arithmetic       (Add | Sub | Mul | Scalar Div)\n");
        printf("  2. Transpose\n");
        printf("  3. Row / Col Stats  (Sum & Mean)\n");
        printf("  4. Sorting          (Bubble | Selection | Insertion)\n");
        printf("  5. Searching        (Linear | Binary row-wise)\n");
        printf("  0. Exit\n");
        divider();
        printf("  Choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            menu_arith();
            break;
        case 2:
            menu_transpose();
            break;
        case 3:
            menu_stats();
            break;
        case 4:
            menu_sort();
            break;
        case 5:
            menu_search();
            break;
        case 0:
            printf("\n  See you, Abhinav!\n\n");
            break;
        default:
            printf("  [!] Invalid choice.\n");
            pause_screen();
        }
    } while (ch != 0);

    return 0;
}