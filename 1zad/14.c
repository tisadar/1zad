#include <stdio.h>

int main() {
    int number;
    unsigned char new_byte;

    printf("Введите целое положительное число: ");
    scanf("%d", &number);

    printf("Введите новое значение для третьего байта (от 0 до 255): ");
    scanf("%hhu", &new_byte);

    number &= ~(0xFF << 16);
    number |= (new_byte << 16);

    printf("Результат: %d\n", number);
    return 0;
}
