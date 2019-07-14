#include "holberton.h"
#include <stdio.h>

/**
 * main - prints the number of arugments passed into it
 *
 * @argc: amount entered in command line
 * @argv: holds string values of what was entered
 * Return: On success 0
 *
 */
int main(int argc, char *argv[])
{
	if (argv != '\0')
		printf("%d\n", argc - 1);
	return (0);
}
