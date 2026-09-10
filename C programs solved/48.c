#include <stdio.h>

int main(void) {
    int n, arr[200], key;
    printf("Enter size of sorted array: ");
    scanf("%d", &n);
    if (n <= 0 || n > 200) return 0;
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter key: ");
    scanf("%d", &key);

    int low = 0, high = n - 1, mid, found = -1;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            found = mid;
            break;
        }
        if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    if (found >= 0) printf("Found at index %d\n", found);
    else printf("Not found\n");
    return 0;
}
