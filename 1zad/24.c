#include <stdio.h>

int main() {
    int N;

    printf("Введите размерность квадратной матрицы (N): ");
    scanf("%d", &N);

    int matrix[N][N];
    int num = 1;
    int top = 0, bottom = N - 1, left = 0, right = N - 1;

    // Заполнение матрицы по спирали
    while (num <= N * N) {
        // Слева направо по верхней стороне
        for (int i = left; i <= right && num <= N * N; i++) {
            matrix[top][i] = num++;
        }
        top++;

        // Сверху вниз по правой стороне
        for (int i = top; i <= bottom && num <= N * N; i++) {
            matrix[i][right] = num++;
        }
        right--;

        // Справа налево по нижней стороне
        for (int i = right; i >= left && num <= N * N; i--) {
            matrix[bottom][i] = num++;
        }
        bottom--;

        // Снизу вверх по левой стороне
        for (int i = bottom; i >= top && num <= N * N; i--) {
            matrix[i][left] = num++;
        }
        left++;
    }

    // Вывод матрицы
    printf("Матрица, заполненная улиткой:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%4d", matrix[i][j]);  // Форматирование для выравнивания
        }
        printf("\n");
    }

    return 0;
}
