#include "main.h"

/**
 * swap_int - swaps to integers
 * @a: pointer to the first integer
 * @b: pointer two the second integer
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
