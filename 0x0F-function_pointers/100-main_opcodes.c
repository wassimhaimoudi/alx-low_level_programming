#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: a program that prints its own opcode
 * @argc: the num of args passed to the program
 * @argv: 2d array that holds args as elements.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	unsigned char *main_ptr = (unsigned char *)main;
	int i, num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num_bytes; i++)
	{
		if (i == num_bytes - 1)
		{
			printf("%02hhx\n", main_ptr[i]);
			break;
		}
		printf("%02hhx ", main_ptr[i]);
	}
	return (0);
}
