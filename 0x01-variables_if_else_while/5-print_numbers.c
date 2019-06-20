#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print all single digit numbers of base 10
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	char str[10] = "0123456789";

	while (i < 10)
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
