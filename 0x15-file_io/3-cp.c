#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *main - copies the content of a file to another file.
 *@argv: the input pointer
 *@argc: the input number of argument
 *
 *Return: 0
 */

int main(int argc, char **argv)
{
	int ff, ft, files;
	char buff[1024];

	if (argc != 3)
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	ft = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (ft == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	ff = open(argv[1], O_RDONLY);
	if (ff == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	while ((files = read(ff, buff, 1024)) > 0)
	{
		if (files == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		files = write(ft, buff, files);
		if (files == -1)
		{
			exit(99);
		}
	}
	if (files == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(ft) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close ft %d\n", ft), exit(100);
	if (close(ff) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close ff %d\n", ff), exit(100);
	return (0);
}
