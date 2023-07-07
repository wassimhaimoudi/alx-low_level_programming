#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point.
 * Desription: a program that multiplies two numbers.
 * @argc: the number of arguments to be passed.
 * @argv: 2d array of args.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	prod = atoi(argv[argc - 1]) * atoi(argv[argc - 2]);

	printf("%d\n", prod);

	return (0);
}
