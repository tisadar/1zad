#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N;

    printf("Введите размерность квадратной матрицы (N): ");
    scanf("%d", &N);

    int matrix[N][N];

    srand(time(NULL));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matrix[i][j] = rand() % 100;  
        }
    }

    printf("Квадратная матрица %dx%d:\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%4d", matrix[i][j]);  
        }
        printf("\n");
    }

    return 0;
}
