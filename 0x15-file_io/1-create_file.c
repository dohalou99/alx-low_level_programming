#include "main.h"

/**
 * create_file - Create a function that creates a file.
 * @filename: th input pointer
 * @text_content: the input string
 *
 * Return: If the function fails - -1.
 *         if it is not - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int al, j, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	al = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	j = write(al, text_content, length);

	if (al == -1 || j == -1)
		return (-1);

	close(al);

	return (1);
}
