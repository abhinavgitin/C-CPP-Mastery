#include <stdio.h>

int main(void) {
    int n;
    int s = 0, a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
    printf("Enter number of students: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char g;
        printf("Enter grade of student %d (S/A/B/C/D/E/F): ", i + 1);
        scanf(" %c", &g);
        switch (g) {
            case 'S': case 's': s++; break;
            case 'A': case 'a': a++; break;
            case 'B': case 'b': b++; break;
            case 'C': case 'c': c++; break;
            case 'D': case 'd': d++; break;
            case 'E': case 'e': e++; break;
            case 'F': case 'f': f++; break;
            default: break;
        }
    }
    printf("S=%d A=%d B=%d C=%d D=%d E=%d F=%d\n", s, a, b, c, d, e, f);
    return 0;
}
