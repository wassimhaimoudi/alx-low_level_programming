#include "main.h"

/**
 * append_text_to_file - function name
 * Description: function that appends text at the end of a file.
 *
 * @filename: the file name
 * @text_content: the text to append to the end of the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, file_d, number_w;

	if (!filename)
		return (-1);

	file_d = open(filename, O_RDWR | O_APPEND);

	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
		;

		number_w = write(file_d, text_content, i);

		if (file_d == -1 ||  number_w == -1)
			return (-1);
	}
	return (1);
}
