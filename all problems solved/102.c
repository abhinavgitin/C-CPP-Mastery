#include <stdio.h>
#include <string.h>

struct MOVIE {
    char title[100];
    char producer[100];
    double budget;
    float duration_hours;
};

int main(void) {
    struct MOVIE movies[100];
    int n;
    printf("How many movies (max 100)? ");
    scanf("%d", &n);
    getchar();
    if (n <= 0 || n > 100) return 0;

    for (int i = 0; i < n; i++) {
        printf("\nMovie %d title: ", i + 1);
        fgets(movies[i].title, sizeof(movies[i].title), stdin);
        movies[i].title[strcspn(movies[i].title, "\n")] = '\0';

        printf("Producer: ");
        fgets(movies[i].producer, sizeof(movies[i].producer), stdin);
        movies[i].producer[strcspn(movies[i].producer, "\n")] = '\0';

        printf("Budget and duration(hours): ");
        scanf("%lf %f", &movies[i].budget, &movies[i].duration_hours);
        getchar();
    }

    printf("\n%-4s %-25s %-20s %-12s %-10s\n", "No", "Title", "Producer", "Budget", "Duration");
    for (int i = 0; i < n; i++) {
        printf("%-4d %-25s %-20s %-12.2lf %-10.2f\n",
               i + 1,
               movies[i].title,
               movies[i].producer,
               movies[i].budget,
               movies[i].duration_hours);
    }
    return 0;
}
