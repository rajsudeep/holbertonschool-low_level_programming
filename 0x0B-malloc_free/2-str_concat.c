#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string to concat
 * @s2: second string to concat
 * Return: pointer to concatenated string
 *
 */
char *str_concat(char *s1, char *s2)
{
	char *sc;
	int i, j, len1, len2, lenc;

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;
	lenc = len1 + len2 + 1;
	sc = malloc(sizeof(char) * lenc);
	for (i = 0; i < len1; i++)
		*(sc + i) = *(s1 + i);
	for (j = 0; j < (len2 + 1); j++)
	{
		*(sc + i) = *(s2 + j);
		i++;
	}
	if (sc == NULL)
		return (NULL);
	else
		return (sc);
}
