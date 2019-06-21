#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print the distinct combos of three digits
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i; j <= '9'; j++)
		{
			for (k = j; k <= '9'; k++)
			{
				if (j != i && k != j && k != i)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i == '7' && j == '8' && k == '9')
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
		j = '0';
	}
	putchar('\n');
	return (0);
}
