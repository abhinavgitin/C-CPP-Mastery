#include <stdio.h>

int main(void) {
    int n;
    double arr[200];
    printf("Enter size of array: ");
    scanf("%d", &n);
    if (n <= 0 || n > 200) return 0;
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%lf", &arr[i]);
    }
    double mn = arr[0], mx = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < mn) mn = arr[i];
        if (arr[i] > mx) mx = arr[i];
    }
    printf("Smallest = %.2lf\nLargest = %.2lf\n", mn, mx);
    return 0;
}
