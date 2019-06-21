#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print all single digit numbers of base 10 without using char variable
 *
 * Return: 0
 */
int main(void)
{
	int i;

	i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
