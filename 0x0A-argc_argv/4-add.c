#include "holberton.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the result of adding positive numbers
 * but prints 0 and Error if no number/non number is passed
 *
 * @argc: amount entered in command line
 * @argv: holds string values of what was entered
 * Return: On success 0
 *
 */
/*
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	if (argv[1] == '\0')
	{
		printf("%d\n", sum);
		return (0);
	}
	while (argc-- && argc > 0)
	{
		for (i = 0; argv[argc][i] != '\0'; i++)
		{
			if (!isdigit(argv[argc][i]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
*/

int main(int argc, char *argv[])
{
	int j;
	int sum;

	sum = 0;
	if (argv[1] == '\0')
	{
		printf("%d\n", sum);
		return (0);
	}
	while (argc-- && argc > 0)
	{
		for (j = 0; argv[argc][j] != '\0'; j++)
		{
			if (!isdigit(argv[argc][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
