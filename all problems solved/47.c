#include <stdio.h>

int main(void) {
    int n, arr[200], key, found = -1;
    printf("Enter size: ");
    scanf("%d", &n);
    if (n <= 0 || n > 200) return 0;
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter key: ");
    scanf("%d", &key);
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = i;
            break;
        }
    }
    if (found >= 0) printf("Found at index %d\n", found);
    else printf("Not found\n");
    return 0;
}
