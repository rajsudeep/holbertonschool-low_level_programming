#include "holberton.h"

/**
 * *_strncat - concatenate two strings using at most n bytes
 *
 * @dest: first string
 * @src: second string to attach to first
 * @n: amount of bytes able to use
 * Return: concatenated string
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int destLen, srcLen;

	for (destLen = 0; dest[destLen] != '\0'; destLen++)
	{
	}
	for (srcLen = 0; srcLen < n && src[srcLen] != '\0'; srcLen++)
	{
		dest[destLen] = src[srcLen];
		destLen++;
	}
	dest[++destLen] = '\0';
	return (dest);
}
