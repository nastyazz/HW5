#include <stdio.h>
void swapColumns(int matrix[][10], int rows, int col1, int col2) // меняет местами 2 столбца матрицы. принимает двумерный массив, кол-во строк, номера 1 и 2 столбцов
{
    for (int i = 0; i < rows; i++) {  // проход по всем строкам
        int temp = matrix[i][col1]; // значения 1 столбца сохрянются в переменной
        matrix[i][col1] = matrix[i][col2];  // знчение из 2 столбца перемешается в 1
        matrix[i][col2] = temp; // сохраненное значение переменной в столбец 2
    }
}
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int matrix[10][10]; 
    for (int i = 0; i < N; i++) { // перебор строк 
        for (int j = 0; j < M; j++) { // перебор столбцов
            scanf("%d", &matrix[i][j]);
        }
    }
    int minSumCol = 0; // хранение номеров
    int maxSumCol = 0;
    int minSum = 0; // хранение мин и макс суммы элементов
    int maxSum = 0;
    for (int j = 0; j < M; j++) { // поиск столбца с минимальной суммы элементов
        int sum = 0;
        for (int i = 0; i < N; i++) { // вычисление суммы элементов каждого столбца
            sum += matrix[i][j]; 
        }
        if (j == 0 || sum < minSum) { // если текующая сумма меньше
            minSum = sum; // обновляем
            minSumCol = j; // сохрянем номер столбца
        }
    }
    for (int j = 0; j < M; j++) { // поиска столбца с макс суммы элементов
        int sum = 0;
        for (int i = 0; i < N; i++) { 
            sum += matrix[i][j];
        }
        if (j == 0 || sum > maxSum) { // если текущая сумма больше
            maxSum = sum; // обновляем
            maxSumCol = j; // сохраняем номер столбца
        }
    }
    swapColumns(matrix, N, minSumCol, maxSumCol); // передаем функции массив и кол-во строк и нацденные номера столбцов. обмен столбцов
    for (int i = 0; i < N; i++) { // вывод исходной матрицы. строка
        for (int j = 0; j < M; j++) { // столбец
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
