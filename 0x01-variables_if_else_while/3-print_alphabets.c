#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print the alphabet in lowercase and in uppercase
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	char str[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (i < 52)
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
