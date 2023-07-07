#include <stdio.h>

/**
 * main - entry point.
 * Description:  a program that prints all arguments it receives.
 *
 * @argc: the number of argspassed to the program.
 * @argv: 2d array of args.
 * Return: Always (0).
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
