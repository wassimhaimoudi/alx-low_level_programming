#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change.
 * @argc: number of args passed into the program.
 * @argv: 2d array of args.
 * Return: 0, otherwise 1 if the argument passed is negative.
 */

int main(int argc, char *argv[])
{
	int i, result, number;
	int coin_vals[] = {25, 10, 5, 2, 1};

	number = atoi(argv[1]);
	result = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (number < 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 0; i < 5 && number >= 0; i++)
	{
		while (number >= coin_vals[i])
		{
			result++;
			number -= coin_vals[i];
		}
	}

	printf("%d\n", result);

	return (0);
}
