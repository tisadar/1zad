#include <stdio.h>

void printBinary(int number) {
    int bits = sizeof(int) * 8;  

    for (int i = bits - 1; i >= 0; i--) {
        int mask = 1 << i;       
        if (number & mask)      
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}

int main() {
    int number;

    printf("Введите целое отрицательное число: ");
    scanf("%d", &number);

    printf("Двоичное представление числа %d: ", number);
    printBinary(number);

    return 0;
}
