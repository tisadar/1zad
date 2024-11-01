#include <stdio.h>

int main() {
    int N;

    printf("Введите размерность квадратной матрицы (N): ");
    scanf("%d", &N);

    int matrix[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j >= i) {
                matrix[i][j] = 1;  
            } else {
                matrix[i][j] = 0; 
            }
        }
    }

    printf("Результат:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
