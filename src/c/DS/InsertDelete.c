#include <stdio.h>

int main() {

    int n, pos, ele;

    printf("Enter the size (N >= 7): ");
    scanf("%d", &n);

    if (n < 7) {
        printf("N must be greater than or equal to 7.");
        return 0;
    }

    int arr[n + 1];

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Insertion
    printf("Enter position for insertion (not first/last): ");
    scanf("%d", &pos);

    printf("Enter element: ");
    scanf("%d", &ele);

    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = ele;
    n++; 

    // Deletion
    printf("Enter position for deletion (not first/last): ");
    scanf("%d", &pos);

    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("Updated array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
} 