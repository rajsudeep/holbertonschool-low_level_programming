#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: NULL terminated string to write
 *
 * Return: On success 1, else -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, numWrite, text_len;

	if (!(filename))
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR, 0600);
	if (fd == -1)
		return (-1);
	if (!(text_content))
		return (1);
	text_len = _strlen(text_content);
	numWrite = write(fd, text_content, text_len);
	close(fd);
	if (numWrite == -1)
		return (-1);
	return (1);
}
