#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print the alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
	int i = 25;
	char str[26] = "abcdefghijklmnopqrstuvwxyz";

	while (i >= 0)
	{
		putchar(str[i]);
		i--;
	}
	putchar('\n');
	return (0);
}
