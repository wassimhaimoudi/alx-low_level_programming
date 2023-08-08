#include "main.h"

/**
 * create_file - function name
 * Description: function that creates a file.
 *
 * @filename: the file tio be created
 * @text_content: text to write into the file
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int i, file_d, number_w;

	if (!filename)
		return (-1);
	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
		;

		file_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
		number_w = write(file_d, text_content, i);

		if (file_d == -1 || number_w == -1)
			return (-1);
	}
	else
	{
		file_d = open(filename, O_CREAT | O_TRUNC, 0600);
		if (file_d == -1)
			return (-1);
	}

	close(file_d);

	return (1);
}
