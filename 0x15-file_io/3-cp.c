#include "holberton.h"
#include <stdio.h>

/**
 * main - copies the content of a file to another file
 * @ac: number of items on the line
 * @av: array of strings from the line
 *
 * Return: Always 0
 */
int main(int ac, char **av)
{
	int fd_i, fd_o, numRead;
	char *file_from = av[1];
	char *file_to = av[2];
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_i = open(file_from, O_RDONLY);
	if (fd_i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			file_from);
		exit(98);
	}
	fd_o = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 110110100);
	if (fd_o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((numRead = read(fd_i, buf, 1024)) > 0)
	{
		if (write(fd_o, buf, numRead) != numRead)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (close(fd_i) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_i);
		exit(100);
	}
	if (close(fd_o) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_o);
		exit(100);
	}
	return (0);
}
