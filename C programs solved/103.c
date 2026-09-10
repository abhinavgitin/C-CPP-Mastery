#include <stdio.h>
#include <string.h>

struct LAPTOP_DETAILS {
    char brand[50];
    char model[50];
    int ram_gb;
    int hdd_gb;
    char color[30];
    float screen_size;
};

void accept(struct LAPTOP_DETAILS arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nLaptop %d brand: ", i + 1);
        fgets(arr[i].brand, sizeof(arr[i].brand), stdin);
        arr[i].brand[strcspn(arr[i].brand, "\n")] = '\0';

        printf("Model: ");
        fgets(arr[i].model, sizeof(arr[i].model), stdin);
        arr[i].model[strcspn(arr[i].model, "\n")] = '\0';

        printf("RAM(GB), HDD(GB), Color, Screen(inches): ");
        scanf("%d %d %29s %f", &arr[i].ram_gb, &arr[i].hdd_gb, arr[i].color, &arr[i].screen_size);
        getchar();
    }
}

void display(const struct LAPTOP_DETAILS arr[], int n) {
    printf("\n%-4s %-12s %-12s %-8s %-10s %-10s %-8s\n",
           "No", "Brand", "Model", "RAM", "HDD", "Color", "Screen");
    for (int i = 0; i < n; i++) {
        printf("%-4d %-12s %-12s %-8d %-10d %-10s %-8.1f\n",
               i + 1,
               arr[i].brand,
               arr[i].model,
               arr[i].ram_gb,
               arr[i].hdd_gb,
               arr[i].color,
               arr[i].screen_size);
    }
}

int main(void) {
    struct LAPTOP_DETAILS laptops[50];
    int n;
    printf("How many laptops (max 50)? ");
    scanf("%d", &n);
    getchar();
    if (n <= 0 || n > 50) return 0;
    accept(laptops, n);
    display(laptops, n);
    return 0;
}
