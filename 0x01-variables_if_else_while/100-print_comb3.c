#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print the distinct combos of two digits
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i; j <= '9'; j++)
		{
			if (j != i)
			{
				putchar(i);
				putchar(j);
				if (i == '8' && j == '9')
					break;
				putchar(',');
				putchar(' ');
			}
		}
		j = '0';
	}
	putchar('\n');
	return (0);
}
