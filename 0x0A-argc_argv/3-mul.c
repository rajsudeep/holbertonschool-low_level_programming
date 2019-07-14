#include "holberton.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - prints the result of the multiplication
 * but if it doesn't recieve 2 arguments it prints Error
 *
 * @argc: amount entered in command line
 * @argv: holds string values of what was entered
 * Return: On success 0
 *
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		printf("Error\n");
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
