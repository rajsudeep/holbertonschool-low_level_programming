#include "holberton.h"

/**
 * *_strcpy - copies string from src to dest
 *
 * @dest: destination to copy string to
 * @src: source where string is copied from
 *
 * Return: pointer to dest
 *
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;
	int i = 0;

	while (src[length] != '\0')
		length++;
	for (; i < length + 1; i++)
		dest[i] = src[i];
	return (dest);
}
