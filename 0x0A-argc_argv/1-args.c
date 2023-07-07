#include <stdio.h>

/**
 * main - entry point.
 * Description: a program that prints the number of arguments passed into it.
 *		followed by a new line.
 * @argc: the number of args.
 * @argv: 2d array of args.
 * Return: Always 0.
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
