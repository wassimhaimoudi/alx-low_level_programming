#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * main - Entry point.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *quote = "and that piece of art is useful\" - Dora Kopar, 2015-10-19\n";

	write(STDERR_FILENO, quote, strlen(quote));
	return (1);
}
