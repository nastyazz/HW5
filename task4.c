#include <stdio.h>

int gcd(int a, int b) { //  вычисление наибольшого делителя с помощью алгоритма евклида

    if (b == 0) // если равно 0
        return a; // то а - наибольшой общий делитель
    return gcd(b, a % b); // иначе остаток от деления а на b
}
void reduce_fraction(int *a, int *b) { // фукнции принимает указатели на переменные
    int greatestCommonDivisor = gcd(*a, *b);  // вычисление наибольшого большого делителя
    *a /= greatestCommonDivisor; // изменение переменных путем деления на наибольший общий делитель
    *b /= greatestCommonDivisor;
}
int main() {
    int numerator = 6; // числитель
    int denominator = 9; // знаменатель
    printf("%d/%d\n", numerator, denominator); // вывод дроби с помощью форматирования строки
    reduce_fraction(&numerator, &denominator); // передаются адреса переменных, т.е изменяется значение переменных
    printf("%d/%d\n", numerator, denominator); // вывод сокращенной дроби
    return 0;
}
