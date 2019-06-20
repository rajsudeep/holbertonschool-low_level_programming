#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print the alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int alphaSize = 26;
	char str[26] = "abcdefghijklmnopqrstuvwxyz";

	while (i < alphaSize)
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
