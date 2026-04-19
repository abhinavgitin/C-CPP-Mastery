#include <stdio.h>

int main(void) {
    int n;
    double arr[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n <= 0 || n > 100) return 0;

    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%lf", &arr[i]);
    }

    printf("Index\tValue\tAddress\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%.2lf\t%p\n", i, arr[i], (void *)&arr[i]);
    }
    return 0;
}
