#include "sort.h"

void swap_ints(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void bubble_sort(int *array, size_t size) {
    size_t i, j;

    for (i = 0; i < size; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap_ints(&array[j], &array[j + 1]);
                print_array(array, size);
            }
        }
    }
}