#include <stdio.h>

/**
 * main - find and print largest prime factor of 612852475143
 *
 * Return: 0 on success
 *
 */
int main(void)
{
	int i;
	long number = 612852475143;

	for (i = 2; i <= number; i++)
	{
		if (number % i == 0)
		{
			number = number/i;
			i--;
		}
	}
	printf("%d\n", i);
	return (0);
}
