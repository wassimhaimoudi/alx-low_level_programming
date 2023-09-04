#include "main.h"

/**
 * read_textfile - function that reads text file and prints it to stdout
 * @filename: the name or the path to the file to be printed out
 * @letters: the number of letters it should rea and print.
 *
 * Return: actual number of letters read and printed, 0 if something went wrong
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t lettersRead, lettersWritten;
	char *buffer = NULL;

	buffer = (char *)malloc(sizeof(char) * letters + 1);

	if (!buffer || !filename)
		return (0);
	fd = open(filename, O_RDWR);
	lettersRead = read(fd, buffer, letters);
	lettersWritten = write(STDOUT_FILENO, buffer, lettersRead);

	if (lettersRead == -1 || lettersWritten == -1 || fd == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);

	return (lettersWritten);
}
