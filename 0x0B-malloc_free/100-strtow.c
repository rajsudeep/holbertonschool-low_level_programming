#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - creates an array of words from given string
 *
 * @str: input string
 * Return: array of the words
 *
 */
char **strtow(char *str)
{
	char **av;
	int ac, i, al, j, k, l;

	/* ac determines amount of words in string*/
	i = 0, al = 0, ac = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] = ' ')
			ac++;
	}
	/* add count word in string that wasn't counted for */
	ac++;

	words = malloc(sizeof(char **) * ac);

	/* malloc space for each character added per word */
	/* while at a specific word array, add chars to it */
	j = 0, k = 0, l = 0;
	for (i = 0; i < ac; i++)
	{
		al = 0;
		for (; str[j] != '\0'; j++)
		{
			if (str[j] != ' ')
				al++;
			else
				break;
		}
		words[i] = malloc(sizeof(char *) * (al + 1));
		for (k = 0; k < al; k++, l++)
		{
			if (str[l] == ' ')
				words[i][k] = '\0';
			else
				words[i][k] = str[l];
		}
	}
	return (words);
}
