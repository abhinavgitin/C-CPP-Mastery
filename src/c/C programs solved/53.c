#include <stdio.h>

int main(void) {
    int n, arr[200], sum = 0;
    printf("Enter size: ");
    scanf("%d", &n);
    if (n <= 0 || n > 200) return 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 != 0) sum += arr[i];
    }
    printf("Sum of odd elements = %d\n", sum);
    return 0;
}
