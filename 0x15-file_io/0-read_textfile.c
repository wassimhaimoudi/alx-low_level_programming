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
	int file_descriptor;
	ssize_t number_read, number_write, total;
	char *buffer;

	buffer = (char *)malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);;

	if (!filename)
		return (0);

	file_descriptor = open(filename, O_RDWR);

	if (file_descriptor == -1)
		return (0);

	number_read = read(file_descriptor, buffer, sizeof(char) * letters);
	number_write = write(STDOUT_FILENO, buffer, sizeof(char) * letters);

	if (number_read == -1 && number_write == -1)
		return (0);
	total = number_read;

	return (total);
}
