#include "main.h"

/**
 * append_text_to_file -that appends text at the end of a file
 * @filename: the input pointer
 * @text_content: The input string
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacksjrite permissions - -1.
 *         if it is not - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, j, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	j = write(o, text_content, length);

	if (o == -1 ||  j == -1)
		return (-1);

	close(o);

	return (1);
}
