#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t start, size_t end);
int jump_search(int *array, size_t size, int value);
size_t min(size_t n, size_t m);
#endif
