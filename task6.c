#include <stdio.h>

int abs_arr(int arr[], int n) { // функция принимает массив целых чисел и его размер
    int replacements = 0; // отслеживает кол-во замен элементов
    int *ptr = arr;  // указатель инициализируется с началом массива
    for (int i = 0; i < n; i++) { // перебор элементов массива. значения сравниваются с 0
        if (*ptr < 0) { // если меньше нуля
            *ptr *= -1; // то значение элемента изменится на его значение умноженное на -1
            replacements++; // увеличение счетчика
        }
        ptr++; // перемещается на след. элемент
    }
    return replacements;
}
int main() {
    int arr[] = {3, -5, 2, -7, 1};
    int size = sizeof(arr) / sizeof(arr[0]); // вычисление размера массива 
    int replacements = abs_arr(arr, size); // функция с массивом и его размером и сохраняется в пременную
    for (int i = 0; i < size; i++) {  // вывод элементов массива
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("%d\n", replacements); // кол-во замен
    return 0;
}