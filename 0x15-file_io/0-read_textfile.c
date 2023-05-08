#include "main.h"
#include<stdlib.h>

/**
 *read_textfile - reads a text file and prints it
 *@filename : the input pointer
 *@letters : the number of letters to be read and print
 *
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t lee;
	ssize_t j, w;
	char *tfile;

	tfile = malloc(letters);
		if (filename == NULL)
			return (0);
	if (tfile == NULL)
		return (0);

	lee = open(filename, O_RDONLY);
	if (lee == -1)
		return (0);

	j = read(lee, tfile, letters);
	w = write(STDOUT_FILENO, tfile, j);

	free(tfile);
	close(lee);

	return (w);
}
