#include <stdio.h>

int linear_search(const int *arr, int n, int key) {
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == key) return i;
    }
    return -1;
}

int main(void) {
    int n, arr[200], key;
    int *p = arr;
    printf("Enter size: ");
    scanf("%d", &n);
    if (n <= 0 || n > 200) return 0;
    for (int i = 0; i < n; i++) scanf("%d", p + i);
    printf("Enter key: ");
    scanf("%d", &key);
    int idx = linear_search(p, n, key);
    if (idx >= 0) printf("Found at index %d\n", idx);
    else printf("Not found\n");
    return 0;
}
