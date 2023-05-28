#include <stdio.h>

struct Move
{
    int x; //  смещение по горизонтали
    int y; // смещение по вертикали
};
struct Move getFinishPoint(struct Move arr[], int n) // функция принимает массив и кол-во элементов
{
    struct Move finishPoint = {0, 0}; // начальные координаты
    for (int i = 0; i < n; i++) // проходимя по каждому элементу массива 
    {
        finishPoint.x += arr[i].x; // добавляем значения к соответсвующим полям
        finishPoint.y += arr[i].y;
    }
    return finishPoint;
}
int main() {
    struct Move moves[] = { // создание массива с перемещениями
        {2, -3},
        {1, 5},
        {-4, 2}
    };
    int numMoves = sizeof(moves) / sizeof(moves[0]); // вычисление кол-ва перемещений
    struct Move finish = getFinishPoint(moves, numMoves); // передается массив и кол-во перемещений в функцию
    printf("(%d, %d)\n", finish.x, finish.y); // вывод конечной точки
    return 0;
}