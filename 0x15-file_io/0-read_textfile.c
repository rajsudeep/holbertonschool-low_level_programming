#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to POSIX
 * @filename: name of file
 * @letters: number of letters to read and print
 *
 * Return: Actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, numRead, numWrite;
	char *buf;

	if (!(filename))
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!(buf))
		return (0);
	fd = open(filename, O_RDWR);

	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	numRead = read(fd, buf, letters);
	numWrite = write(STDOUT_FILENO, buf, numRead);
	free(buf);
	if (numWrite == -1 || numWrite != numRead)
		return (0);
	close(fd);

	return (numWrite);
}
