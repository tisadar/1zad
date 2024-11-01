#include <stdio.h>

int main() {
    int number;
    int count = 0;

    printf("Введите целое положительное число: ");
    scanf("%d", &number);

    while (number > 0) {
        if (number & 1) { 
            count++;
        }
        number >>= 1;
    }

    printf("Количество единиц в двоичном представлении: %d\n", count);
    return 0;
}
