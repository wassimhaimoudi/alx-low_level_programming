#include "main.h"
#include <stdio.h>

/**
 * sum_of_3 - sums the multiples of 3 under 1024.
 */
void sum_of_3(void)
{
	int i, s;

	s = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			s = s + i;
		}
	}
	printf("%d\n", s);
}
