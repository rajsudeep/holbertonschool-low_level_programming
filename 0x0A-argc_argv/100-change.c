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
	int i, coins, change;
	int coinVal[] = {25, 10, 5, 2, 1};

	coins = 0;
	change = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (change <= 0)
	{
		printf("%d\n", coins);
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		while (change >= coinVal)
		{
			change -= coinVal;
			coins++;
		}
	}
	printf("%d\n", coins);
	return (0);
}
