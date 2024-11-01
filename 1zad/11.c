#include <stdio.h>

void printBinary(int number) {
    int bits = sizeof(int) * 8;
    int mask = 1 << (bits - 1); 

    for (int i = 0; i < bits; i++) {
        if (number & mask) 
            printf("1");
        else
            printf("0");

        mask >>= 1; 
    }
    printf("\n");
}

int main() {
    int number;

    printf("Введите целое положительное число: ");
    scanf("%d", &number);

    printf("Двоичное представление числа %d: ", number);
    printBinary(number);

    return 0;
}
