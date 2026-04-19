#include <stdio.h>

int main(void) {
    int n;
    float arr[200], sum = 0.0f;
    printf("Enter size of array: ");
    scanf("%d", &n);
    if (n <= 0 || n > 200) return 0;
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%f", &arr[i]);
        sum += arr[i];
    }
    printf("Sum = %.2f\nAverage = %.2f\n", sum, sum / n);
    return 0;
}
