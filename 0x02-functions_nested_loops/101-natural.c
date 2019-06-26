#include <stdio.h>

/**
 * main - prints the sum of all mults of 3 or 5 below 1024
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int sumOfMults = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}
	printf("%d\n", sumOfMults);

	return (0);
}
