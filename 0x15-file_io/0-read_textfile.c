#include "main.h"
#include <stdlib.h>

/**
 * read_textfile-reads a text file and prints it to the POSix
 * @filename: the input text file
 * @letters: the input number of lettre
 * Return: the j- actual number of bytes read and printed
 *        0 jhen function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bufeer;
	ssize_t al;
	ssize_t j;
	ssize_t t;

	al = open(filename, O_RDONLY);
	if (al == -1)
		return (0);
	bufeer = malloc(sizeof(char) * letters);
	t = read(al, bufeer, letters);
	j = write(STDOUT_FILENO, bufeer, t);

	free(bufeer);
	close(al);
	return (j);
}

