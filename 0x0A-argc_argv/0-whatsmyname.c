#include "main.h"

/**
 * main - entry point
 * Description: this program prints its name, followed by a new line.
 * @argc: number of arguments.
 * @argv: 2d array of arguments.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;
	char *pname;

	pname = argv[argc - 1];
	for (i = 0; pname[i] != '\0'; i++)
		_putchar(pname[i]);
	_putchar('\n');
	return (0);
}
