#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *@filename : the input name of the file
 *@text_content : the input string to add at the end of the file
 *
 *Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int j, y, hee = 0;


	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (hee = 0; text_content[hee];)
			hee++;
	}
	j = open(filename, O_WRONLY | O_APPEND);
	y = write(j, text_content, hee);

	if (j == -1 || y == -1)
		return (-1);
	close(j);
	return (1);
}
