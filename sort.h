#ifndef SORT_H
#define SORT_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void swap_ints(int *a, int *b);

#endif /* SORT_H */