#include "holberton.h"

/**
 * *_strncpy - copies a string from src to dest
 *
 * @dest: where to copy string to
 * @src: string to copy
 * @n: most amount of bytes to use
 * Return: copied string at dest
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
