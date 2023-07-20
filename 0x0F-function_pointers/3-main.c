#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point.
 *
 * Description: a program that performs simple operations.
 * @argc: the number of argumenst passed to the program.
 * @argv: 2d array of arguments.
 * Return: the result of the operation done.
 */
int main(int argc, char *argv[])
{
	char *operator;
	int num1, num2;

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(operator) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", get_op_func(operator)(num1, num2));
	return (0);
}
