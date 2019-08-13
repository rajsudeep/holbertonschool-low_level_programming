#include "holberton.h"

/**
 * _strlen - finds and returns length of string
 * @s: string value
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{
	}
	return (length);
}

/**
 * append_text_to_file - append text to end of a file
 * @filename: name of file
 * @text_content: text to append
 *
 * Return: On success 1, else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, numWrite, text_len;

	if (!(filename))
		return (-1);
	fd = open(filename, O_APPEND | O_RDWR);
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
