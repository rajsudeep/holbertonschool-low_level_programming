#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * specifying n bytes for the second string
 *
 * @s1: first string
 * @s2: second string
 * @n: memory size for second string
 * Return: concatenated string
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sc;
	unsigned int i, j, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;
	sc = malloc(sizeof(char) * (len1 + n + 1));
	if (sc == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		*(sc + i) = *(s1 + i);
	for (j = 0; j < n; j++, i++)
		*(sc + i) = *(s2 + j);
	*(sc + i) = '\0';
	return (sc);
}
