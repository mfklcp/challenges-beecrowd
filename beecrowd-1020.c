#include <stdio.h>

int main() {
    int ageInDays = 0;
    int units[] = {365, 30};
    int result[3] = {0, 0, 0};
    int i = 0;

    scanf("%d", &ageInDays);

    for (i; i < 2; i++) {
        result[i] = ageInDays / units[i];
        ageInDays = ageInDays - (result[i] * units[i]);
    }

    result[i] = ageInDays;

    printf("%d ano(s)\n", result[0]);
    printf("%d mes(es)\n", result[1]);
    printf("%d dia(s)\n", result[2]);

    return 0;
}
