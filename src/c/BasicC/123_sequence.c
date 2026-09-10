#include <stdio.h>
#include <math.h>

int main() {
    int arr[3] = {0};
    int n;
    scanf("%d",&n);
    int num[n];
    for ( int i = 0 ; i < n ; i++ ) {
        scanf("%d",&num[i]);
        arr[num[i]-1]++;
        // meaning that if the current number is 1 thats freq will be stored in 0 and for 2 in 1 and for 3 in 2
    }
    int ans = n - fmax(arr[0], fmax(arr[1], arr[2]));
    printf("%d",ans);
    return 0;
}
