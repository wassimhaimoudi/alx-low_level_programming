#include <atdio.h>
#include "main.h"

/**
 * main -prints the largest number.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a, b, c;
	int largest;

	a = 972;
	b = -98;
	c = 0;
	largest = largest_number(a, b, c);
	printf("%d is the largest number\n", largest);
	return (0);

}

/**
 * largest_number - returns the largest number
 * @a: the first number.
 * @b: the second number.
 * @c: the third number.
 * Return: the largest number of the the three numbers.
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
		largest = a;
	else if (b > a && b > c)
		largest = b;
	else
		largest = c;
	return (largest);


}
