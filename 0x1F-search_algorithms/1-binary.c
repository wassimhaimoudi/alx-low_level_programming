#include "search_algos.h"

/**
 * binary_search - Searches of a value using the Biary search algorithm
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The indext where the value is located, otherwise -1.
 */
int binary_search(int *array, size_t size, int value)
{
	if (array)
	{
		size_t low = 0;
		size_t high = size - 1;
		size_t mid = 0;

		while (low <= high)
		{
			mid = low + (high - low) / 2;
			print_array(array, low, high);
			if (array[mid] < value)
			{
				low = mid + 1;
			}
			else if (array[mid] > value)
			{
				high = mid - 1;
			}
			else
			{
				return ((int)mid);
			}
		}
		return (-1);
	}
	return (-1);
}

/**
 * print_array - Prints array
 * @array: A pointer to the first element of the array
 * @start: The startpoint
 * @end: The endpoint
 *
 * Return: None
 */
void print_array(int *array, size_t start, size_t end)
{
	if (array)
	{
		size_t i = 0;

		printf("Searching in array:");
		for (i = start; i <= end; i++)
		{

			printf(" %i", array[i]);
			if (i < end)
				printf(",");
		}
		printf("\n");
	}
}
