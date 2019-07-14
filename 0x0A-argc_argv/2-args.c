#include "holberton.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 *
 * @argc: amount entered in command line
 * @argv: holds string values of what was entered
 * Return: On success 0
 *
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; argv[i] != '\0'; i++)
		printf("%s\n", argv[i]);
	}
	return (0);
}
