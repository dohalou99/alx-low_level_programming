#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *main - that copies the content of a file to another file
 *@arc: the input number of args
 *@arv: the input pointer of arg
 *
 * Description:if the fil is not corect, exit code 97
 *             if the fil_from does not exist, exit code 98
 *             if the fil_to cannot be created, exit code 99
 *             if you can not close a file descriptor, exit code 100
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int lfrom, lto;
	int n1 = 1024,n2 = 0;
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (argc != 3)
	
	lto = open(argv[1], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
	| S_IRGRP | S_IWGRP | S_IROTH);
	if (lto == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
	close(lfrom), exit(99);
	}

	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	lfrom = open(argv[2], O_RDONLY);
	if (lfrom == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
	exit(98);
	}

	while (n1 = 1024)
	{
		n1 = read(lfrom, buff, 1024);
		if (n1 == -1)
		{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		exit(98);
		}
		n2 = write(lto, buff, n1);
		if (n2 < n1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (close(lfrom) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", lfrom), exit(100);
	if (close(lto) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", lto), exit(100);

	return (0);
}
