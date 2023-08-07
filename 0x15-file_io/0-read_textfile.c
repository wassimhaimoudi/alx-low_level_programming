#include "main.h"

/**
 * read_textfile - function name
 * Description: function that reads a text file and prints
 * it to the POSIX standard output
 *
 * @filename: the text file to be read from
 * @letters: nunber of letters read.
 * Return: number of letters it could read and write. 0 if it fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t number_r, number_w;
	char *buffer;

	buffer = (char *)malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	if (!filename)
		return (0);

	file_d = open(filename, O_RDWR);
	number_r = read(file_d, buffer, sizeof(char) * letters);
	number_w = write(STDOUT_FILENO, buffer, number_r);

	if (number_w == -1 || number_w == -1 || file_d == -1 || number_w != number_r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(file_d);

	return (number_w);
}
