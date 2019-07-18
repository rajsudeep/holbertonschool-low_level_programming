#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * setwords  - create the words to place in the word array
 *
 * @ac: amount of words including NULL
 * @words: array of the words to be
 * @str: input string
 * Return: array of the words
 */
char **setwords(int ac, char **words, char *str)
{
	int i, j, al, w, k;

	j = 0, k = 0, w = 0;
	for (i = 0; str[i] != '\0' && w < ac; i++)
	{
		if (str[i] != ' ')
		{
			j = i;
			al = 0;
			for (; str[j] != '\0' && str[j] != ' '; j++, al++)
			{
			}
			words[w] = malloc(sizeof(char) * (al + 1));
			if (words[w] == NULL)
			{
				for (k = 0; k < w; w++)
					free(words[w]);
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
 *
 */
char **strtow(char *str)
{
	char **words;
	int ac, i;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	/* ac determines amount of words in string*/
	i = 0, ac = 0;
	for (i = 0; str[i] != '\0'; i++)
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			ac++;
	ac++;

	if (ac == 0)
		return (NULL);
	words = malloc(sizeof(char *) * ac);
	if (words == NULL)
		return (NULL);

	/* malloc space for each character added per word */
	/* while at a specific word array, add chars to it */
	return (setwords(ac, words, str));
}
