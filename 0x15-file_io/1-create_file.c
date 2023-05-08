#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *create_file - Create a function that creates a file.
 *@filename : the name of the file to create
 *@text_content : the input string to write to the file
 *
 * Return: If the function fails -1, 1 success.
 */
int create_file(const char *filename, char *text_content)
{
	int lee, w, crea;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		for (crea = 0; text_content[crea];)
			crea++;
	}

	lee = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	w = write(lee, text_content, crea);

	if (lee == -1 || w == -1)
		return (-1);

	close(lee);
	return (1);
}
