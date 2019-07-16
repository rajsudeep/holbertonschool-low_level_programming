#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - creates a duplicate string
 *
 * @str: input string to duplicate
 * Return: a pointer to duplicate string
 *
 */
char *_strdup(char *str)
{
	char *new;
	int i, strlen;

	strlen = 0;
	while (str[strlen] != '\0')
		strlen++;
	new = malloc(sizeof(char) * (strlen + 1));
	if (str == NULL || new == NULL)
		return (NULL);
	for (i = 0; i < strlen + 1; i++)
		*(new + i) = *(str + i);
	return (new);
}
