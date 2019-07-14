#include "holberton.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 *
 * @argc: amount entered in command line
 * @argv: holds string values of what was entered
 * Return: On success 0
 *
 */
int main(int argc, char *argv[])
{
	int coins, change;

	coins = 0;
	change = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (change < 0)
	{
		printf("%d\n", coins);
		return (0);
	}
	while (change > 0)
	{
		if (change % 25 == 0)
			change -= 25;
		else if (change % 10 == 0)
			change -= 10;
		else if (change % 5 == 0)
			change -= 5;
		else if (change % 2 == 0)
			change -= 2;
		else
			change -= 1;
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
