#include <stdio.h>
#include <string.h>

struct MOVIE {
    char title[100];
    char producer[100];
    double budget;
    float duration_hours;
};

int main(void) {
    struct MOVIE m;
    printf("Enter movie title: ");
    fgets(m.title, sizeof(m.title), stdin);
    m.title[strcspn(m.title, "\n")] = '\0';

    printf("Enter movie producer: ");
    fgets(m.producer, sizeof(m.producer), stdin);
    m.producer[strcspn(m.producer, "\n")] = '\0';

    printf("Enter budget and duration (hours): ");
    scanf("%lf %f", &m.budget, &m.duration_hours);

    printf("\nMovie Details\n");
    printf("Title: %s\nProducer: %s\nBudget: %.2lf\nDuration: %.2f hours\n",
           m.title, m.producer, m.budget, m.duration_hours);
    return 0;
}
