#include "main.h"

/**
 * main - entry point
 * @argc: The number of command line arguments
 * @argv: The array of command line arguments
 *
 * Return: always 0.
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, error;
	ssize_t charsRead, charsWritten;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	fd_from = open(argv[1], O_RDWR | O_CREAT);
	fd_to = open(argv[2], O_RDWR | O_CREAT | O_TRUNC);
	error_file(fd_from, fd_to, argv);

	charsRead = 1024;
	while (charsRead == 1024)
	{
		charsRead = read(fd_from, buffer, 1024);
		if (charsRead == -1)
			error_file(-1, 0, argv);
		charsWritten = write(fd_to, buffer, charsRead);
		if (charsWritten == -1)
			error_file(0, -1, argv);
	}

	error = close(fd_from);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	error = close(fd_to);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	return (0);
}

/**
 * error_file - checks if files can be opened.
 * @fd_from: file_from.
 * @fd_to: file_to.
 * @argv: arguments vector.
 * Return: Void.
 */
void error_file(int fd_from, int fd_to, char **argv)
{
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
