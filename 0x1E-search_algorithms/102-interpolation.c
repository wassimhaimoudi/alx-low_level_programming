#include "search_algos.h"
/**
 * interpolation_search - Implements the Interpolation search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: the number of elements of the array to search in
 * @value: The value to search for
 *
 * Return: The first index where the value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	if (array && size != 0)
	{
		size_t low = 0, pos = 0, high = size - 1;

		while (low <= high)
		{
			if (array[high] == array[low])
			{
				if (array[low] == value)
					return (low);
				else
					return (-1);
			}
			pos = low + (((double)(high - low) / (array[high] - array[low])))
				* (value - array[low]);
			if ((pos >= size) || ((pos > high) || (pos < low)))
			{
				printf("Value checked array[%ld] is out of range\n", pos);
				return (-1);
			}
			if (array[pos] < value)
			{
				printf("Value checked array[%ld] = [%i]\n", pos, array[pos]);
				low = pos + 1;
			}
			else if (array[pos] > value)
			{
				printf("Value checked array[%ld] = [%i]\n", pos, array[pos]);
				high = pos - 1;
			}
			else
			{

				printf("Value checked array[%ld] = [%i]\n", pos, array[pos]);
				return (pos);
			}
		}
		return (-1);
	}
	return (-1);
}
