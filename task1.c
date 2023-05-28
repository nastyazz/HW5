#include <stdio.h>

void swap_numbers(int *a, int * b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}