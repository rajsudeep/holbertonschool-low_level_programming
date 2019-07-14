#include "holberton.h"
#include <stdio.h>

/**
 * main - prints its executable file name
 *
 * @argc: amount entered in command line
 * @argv: holds string values of what was entered
 * Return: On success 0
 *
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", argv[0]);
	return (0);
}
