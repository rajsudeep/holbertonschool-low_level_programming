#include "holberton.h"

/**
 * *_strcat - concatenate two strings
 *
 * @dest: first string
 * @src: second string to attach to first
 * Return: concatenated string
 *
 */
char *_strcat(char *dest, char *src)
{
	int destLen, srcLen;

	for (destLen = 0; dest[destLen] != '\0'; destLen++)
	{
	}
	for (srcLen = 0; src[srcLen] != '\0'; srcLen++)
	{
		dest[destLen] = src[srcLen];
		destLen++;
	}
	dest[++destLen] = '\0';
	return (dest);
}
