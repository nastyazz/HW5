#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Вводим количество элементов в массиве
    int arr[100];  // Создаем массив размером 100
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);  // Вводим элементы массива
    }
    int k = N / 2;  // Вычисляем половину длины массива
    for (int i = k; i < N; i++) {
        printf("%d ", arr[i]);  // Выводим элементы с номерами от k до N-1
    }
    for (int i = 0; i < k; i++) {
        printf("%d ", arr[i]);  // Выводим элементы с номерами от 0 до k-1
    }
    return 0;
}
