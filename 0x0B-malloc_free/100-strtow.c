#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * setwords  - create the words to place in the word array
 *
 * @ac: amount of words including NULL
 * @str: input string
 * Return: array of the words
 */
char **setwords(int ac, char *str)
{
	int i, j, al, w, k, l;
	char **words;

	if (ac == 0)
		return (NULL);
	words = malloc(sizeof(char *) * ac + 1);
	if (words == NULL)
		return (NULL);

	j = 0, k = 0, w = 0;
	for (i = 0; str[i] != '\0' && w < ac; i++)
	{
		if (str[i] != ' ')
		{
			al = 0;
			j = i;
			while (str[j] != '\0' && str[j] != ' ')
			{
				j++;
				al++;
			}
			words[w] = malloc(sizeof(char) * (al + 1));
			if (words[w] == NULL)
			{
				for (l = 0; l < w; l++)
					free(words[l]);
				free(words);
				return (NULL);
			}
			for (k = 0; k < al; k++, i++)
			{
				words[w][k] = str[i];
			}
			words[w][k] = '\0';
			w++;
		}
	}
	words[w] = NULL;
	return (words);
}

/**
 * strtow - creates an array of words from given string
 *
 * @str: input string
 * Return: array of the words
 */
char **strtow(char *str)
{
	int ac, i;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	/* ac determines amount of words in string*/
	i = 0, ac = 0;
	for (i = 0; str[i] != '\0'; i++)
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			ac++;

	/* malloc space for each character added per word */
	/* while at a specific word array, add chars to it */
	return (setwords(ac, str));
}
