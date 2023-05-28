#include <stdio.h>

// Определение структуры Person
struct Person {
    char name[50]; // хранение имени
    int age; //  хранение возраста
};
float averageAge(struct Person arr[], int n) {  // рассчет среднего возраста
    int totalAge = 0; 
    int i;
    for (i = 0; i < n; i++) {     // суммируем возрасты всех людей в массиве
        totalAge += arr[i].age;
    }
    float average = (float) totalAge / n;   // рассчитываем средний возраст
    return average;
}
int main() {
    struct Person people[] = {
        {"Billie", 27},
        {"Roma", 23},
        {"Lana", 40}
    };
    int numPeople = sizeof(people) / sizeof(people[0]); // присваивание значения, равное общему числу элементов в массиве
    float avgAge = averageAge(people, numPeople);
    printf("%.2f\n", avgAge); // два знака после запятой
    return 0;
}