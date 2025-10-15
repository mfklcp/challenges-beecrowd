#include <stdio.h>

void calcule();
#define SIZE 7

int main() {
    int bankNote[SIZE] = {100, 50, 20, 10, 5, 2, 1};
    int entry = 0;
    int result[SIZE] = {0, 0, 0, 0, 0, 0};

    scanf("%d", &entry);

    calcule(entry, bankNote, result, 0);

    printf("%d\n", entry);
    
    for (int i; i < SIZE; i++) {
        printf("%d nota(s) de R$ %d,00\n", result[i], bankNote[i]);
    }

    return 0;
}

void calcule(int value, int * bankNote, int * arrayResult, int index) {

    int result = value / bankNote[index];
    int rest = value - (result * bankNote[index]);

    arrayResult[index] = result;

    if (rest == 0) {
        return;
    } else {
        calcule(rest, bankNote, arrayResult, ++index);
    }
}
