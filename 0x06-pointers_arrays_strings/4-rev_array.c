#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * of integers
 * @a: array to be reversed.
 * @n: number of elements in the array.
 */

void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < n / 2; i++)
	{
		t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
}
