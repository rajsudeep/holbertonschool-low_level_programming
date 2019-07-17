#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concantenate all elements in program
 *
 * @ac: number of arguments
 * @av: argument strings
 * Return: string with all arguments concatenated
 *
 */
char *argstostr(int ac, char **av)
{
	char *s, *p;
	int i, j, k, size;

	if (ac == 0 || av == NULL)
		return (NULL);
	size = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
		size++;
	}
	s = malloc(sizeof(char) * (size + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++, k++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
		{
			s[k] = av[i][j];
		}
			s[k] = '\n';
	}
	s[k] = '\0';
	p = s;
	return (p);
}
