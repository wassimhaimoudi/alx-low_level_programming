#include "search_algos.h"

/**
 * jump_search - Implements the jump search algorithm.
 * @array: A pointer to the first element in the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where the value is located, otherwise -1.
 */
int jump_search(int *array, size_t size, int value)
{
	if (array)
	{
		size_t a = 0;
		size_t b = floor(sqrt(size));

		/* array = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}
		 *          0  1  2  3  4  5  6  7  8  9
		 *                   a        b
		 */
		while (array[min(b, size) - 1] < value)
		{
			printf("Value checked array[%ld] = [%d]\n", a, array[a]);
			a = b;
			b += floor(sqrt(size));
			if (a >= size)
				return (-1);
		}
		printf("Value found between indexes [%ld] and [%ld]\n", a, b);
		while (array[a] < value)
		{
			printf("Value checked array[%ld] = [%d]\n", a, array[a]);
			a++;
			if (a == min(b, size))
				return (-1);
		}

		if (array[a] == value)
			return (a);

		return (-1);
	}
	return (-1);
}
/** min - Calculates the minimum value of two input numbers
 * @n: First number
 * @m: Second number
 *
 * Return: The smallest number.
 */
size_t min(size_t n, size_t m)
{
	if (n <= m)
		return (n);
	return (m);
}
