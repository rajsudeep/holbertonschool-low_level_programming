#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print the numbers of base 16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	char str[16] = "0123456789abcdef";

	while (i < 16)
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
