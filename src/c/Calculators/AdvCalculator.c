/*
 * ============================================================
 *   C Toolkit — Arithmetic | Sorting | Searching
 *   Author  : Abhinav
 *   Info    : Every operation has its own input(), logic(),
 *             and output() function — strictly modular.
 * ============================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* ============================================================
 *  GLOBAL TYPE SWITCH
 *  mode = 0 → integer arithmetic
 *  mode = 1 → float arithmetic
 * ============================================================ */
int mode = 0;   /* set once at startup, used by arith functions */

/* ============================================================
 *  UTILITY
 * ============================================================ */
void clear_screen(void) {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void pause(void) {
    printf("\n  Press ENTER to continue...");
    while (getchar() != '\n');
    getchar();
}

void print_divider(void) {
    printf("  --------------------------------------------------------\n");
}

void print_header(const char *title) {
    printf("\n");
    print_divider();
    printf("  %s\n", title);
    print_divider();
}


/* ============================================================
 *  SECTION 1 — ARITHMETIC  (int & float)
 * ============================================================ */

/* ---------- INPUT ---------- */
void arith_input(double *a, double *b) {
    if (mode == 0) {
        int ia, ib;
        printf("  Enter two integers: ");
        scanf("%d %d", &ia, &ib);
        *a = ia; *b = ib;
    } else {
        printf("  Enter two floats: ");
        scanf("%lf %lf", a, b);
    }
}

/* ---------- LOGIC ---------- */
double arith_add(double a, double b) { return a + b; }
double arith_sub(double a, double b) { return a - b; }
double arith_mul(double a, double b) { return a * b; }

/* Division has its own input to handle zero */
void arith_div_input(double *a, double *b) {
    arith_input(a, b);
    while (*b == 0.0) {
        printf("  [!] Divisor cannot be zero. Re-enter: ");
        if (mode == 0) {
            int ib; scanf("%d", &ib); *b = ib;
        } else {
            scanf("%lf", b);
        }
    }
}
double arith_div(double a, double b) { return a / b; }

/* ---------- OUTPUT ---------- */
void arith_output(const char *op, double a, double b, double result) {
    if (mode == 0)
        printf("\n  Result : %d %s %d = %d\n",
               (int)a, op, (int)b, (int)result);
    else
        printf("\n  Result : %.4lf %s %.4lf = %.4lf\n",
               a, op, b, result);
}


/* ============================================================
 *  SECTION 2 — SORTING
 *  Works on an integer array (sorting floats is identical;
 *  kept as int to keep the output readable for a student demo)
 * ============================================================ */

/* ---------- INPUT ---------- */
void sort_input(int arr[], int *n) {
    printf("  How many elements? ");
    scanf("%d", n);
    printf("  Enter %d integers: ", *n);
    for (int i = 0; i < *n; i++) scanf("%d", &arr[i]);
}

/* ---------- OUTPUT ---------- */
void sort_output(const char *algo, int arr[], int n) {
    printf("\n  [%s] Sorted array: ", algo);
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

/* ---------- HELPER: copy array ---------- */
void array_copy(int src[], int dst[], int n) {
    for (int i = 0; i < n; i++) dst[i] = src[i];
}

/* ---------- LOGIC: Bubble Sort ---------- */
void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1]) {
                int t = arr[j]; arr[j] = arr[j+1]; arr[j+1] = t;
            }
}

/* ---------- LOGIC: Selection Sort ---------- */
void selection_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx]) min_idx = j;
        int t = arr[i]; arr[i] = arr[min_idx]; arr[min_idx] = t;
    }
}

/* ---------- LOGIC: Insertion Sort ---------- */
void insertion_sort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i], j = i - 1;
        while (j >= 0 && arr[j] > key) { arr[j+1] = arr[j]; j--; }
        arr[j+1] = key;
    }
}

/* ---------- DRIVER: runs all 3 on a copy ---------- */
void run_all_sorts(int original[], int n) {
    int tmp[100];

    array_copy(original, tmp, n);
    bubble_sort(tmp, n);
    sort_output("Bubble Sort   ", tmp, n);

    array_copy(original, tmp, n);
    selection_sort(tmp, n);
    sort_output("Selection Sort", tmp, n);

    array_copy(original, tmp, n);
    insertion_sort(tmp, n);
    sort_output("Insertion Sort", tmp, n);
}


/* ============================================================
 *  SECTION 3 — SEARCHING
 * ============================================================ */

/* ---------- INPUT ---------- */
void search_input(int arr[], int *n, int *target) {
    printf("  How many elements? ");
    scanf("%d", n);
    printf("  Enter %d integers: ", *n);
    for (int i = 0; i < *n; i++) scanf("%d", &arr[i]);
    printf("  Enter the target to search: ");
    scanf("%d", target);
}

/* ---------- OUTPUT ---------- */
void search_output_linear(int index, int target) {
    if (index == -1)
        printf("\n  [Linear Search]  %d NOT found in the array.\n", target);
    else
        printf("\n  [Linear Search]  %d found at index %d.\n", target, index);
}

void search_output_binary(int index, int target) {
    if (index == -1)
        printf("  [Binary Search]  %d NOT found in the array.\n", target);
    else
        printf("  [Binary Search]  %d found at index %d (sorted position).\n",
               target, index);
}

/* ---------- LOGIC: Linear Search ---------- */
int linear_search(int arr[], int n, int target) {
    for (int i = 0; i < n; i++)
        if (arr[i] == target) return i;
    return -1;
}

/* ---------- LOGIC: Binary Search (requires sorted array) ---------- */
int binary_search(int arr[], int n, int target) {
    int lo = 0, hi = n - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) lo = mid + 1;
        else hi = mid - 1;
    }
    return -1;
}


/* ============================================================
 *  MENUS
 * ============================================================ */

void menu_arithmetic(void) {
    int choice;
    double a, b, result;

    /* choose mode once per arithmetic session */
    print_header("ARITHMETIC — Data Type");
    printf("  1. Integers\n");
    printf("  2. Floats\n");
    printf("  Choice: ");
    scanf("%d", &choice);
    mode = (choice == 2) ? 1 : 0;

    do {
        print_header("ARITHMETIC MENU");
        printf("  1. Addition\n");
        printf("  2. Subtraction\n");
        printf("  3. Multiplication\n");
        printf("  4. Division\n");
        printf("  0. Back\n");
        printf("  Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                print_header("ADDITION");
                arith_input(&a, &b);
                result = arith_add(a, b);
                arith_output("+", a, b, result);
                break;
            case 2:
                print_header("SUBTRACTION");
                arith_input(&a, &b);
                result = arith_sub(a, b);
                arith_output("-", a, b, result);
                break;
            case 3:
                print_header("MULTIPLICATION");
                arith_input(&a, &b);
                result = arith_mul(a, b);
                arith_output("*", a, b, result);
                break;
            case 4:
                print_header("DIVISION");
                arith_div_input(&a, &b);
                result = arith_div(a, b);
                arith_output("/", a, b, result);
                break;
            case 0: break;
            default: printf("  [!] Invalid choice.\n");
        }
        if (choice != 0) pause();
    } while (choice != 0);
}

void menu_sorting(void) {
    int arr[100], n, choice;

    do {
        print_header("SORTING MENU");
        printf("  1. Bubble Sort\n");
        printf("  2. Selection Sort\n");
        printf("  3. Insertion Sort\n");
        printf("  4. Run ALL three (compare)\n");
        printf("  0. Back\n");
        printf("  Choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            int tmp[100];
            sort_input(arr, &n);

            switch (choice) {
                case 1:
                    array_copy(arr, tmp, n);
                    bubble_sort(tmp, n);
                    sort_output("Bubble Sort", tmp, n);
                    break;
                case 2:
                    array_copy(arr, tmp, n);
                    selection_sort(tmp, n);
                    sort_output("Selection Sort", tmp, n);
                    break;
                case 3:
                    array_copy(arr, tmp, n);
                    insertion_sort(tmp, n);
                    sort_output("Insertion Sort", tmp, n);
                    break;
                case 4:
                    printf("\n");
                    run_all_sorts(arr, n);
                    break;
            }
            pause();
        } else if (choice != 0) {
            printf("  [!] Invalid choice.\n");
        }
    } while (choice != 0);
}

void menu_searching(void) {
    int arr[100], n, target, choice;

    do {
        print_header("SEARCHING MENU");
        printf("  1. Linear Search\n");
        printf("  2. Binary Search  (array will be sorted first)\n");
        printf("  3. Both (compare)\n");
        printf("  0. Back\n");
        printf("  Choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 3) {
            search_input(arr, &n, &target);
            int idx;

            switch (choice) {
                case 1:
                    idx = linear_search(arr, n, target);
                    search_output_linear(idx, target);
                    break;
                case 2: {
                    /* sort a copy for binary search */
                    int tmp[100];
                    array_copy(arr, tmp, n);
                    insertion_sort(tmp, n);   /* sort before binary search */
                    printf("  (Sorted for binary search): ");
                    for (int i = 0; i < n; i++) printf("%d ", tmp[i]);
                    printf("\n");
                    idx = binary_search(tmp, n, target);
                    search_output_binary(idx, target);
                    break;
                }
                case 3: {
                    idx = linear_search(arr, n, target);
                    search_output_linear(idx, target);

                    int tmp[100];
                    array_copy(arr, tmp, n);
                    insertion_sort(tmp, n);
                    printf("  (Sorted for binary search): ");
                    for (int i = 0; i < n; i++) printf("%d ", tmp[i]);
                    printf("\n");
                    idx = binary_search(tmp, n, target);
                    search_output_binary(idx, target);
                    break;
                }
            }
            pause();
        } else if (choice != 0) {
            printf("  [!] Invalid choice.\n");
        }
    } while (choice != 0);
}


/* ============================================================
 *  MAIN
 * ============================================================ */
int main(void) {
    int choice;

    do {
        clear_screen();
        printf("\n");
        printf("  ========================================================\n");
        printf("       C TOOLKIT  —  Arithmetic | Sorting | Searching     \n");
        printf("  ========================================================\n");
        printf("  1. Arithmetic  (+ - * /  |  int or float)\n");
        printf("  2. Sorting     (Bubble | Selection | Insertion)\n");
        printf("  3. Searching   (Linear | Binary)\n");
        printf("  0. Exit\n");
        print_divider();
        printf("  Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: menu_arithmetic(); break;
            case 2: menu_sorting();    break;
            case 3: menu_searching();  break;
            case 0:
                printf("\n  Goodbye, Abhinav!\n\n");
                break;
            default:
                printf("  [!] Invalid choice. Try again.\n");
                pause();
        }
    } while (choice != 0);

    return 0;
}