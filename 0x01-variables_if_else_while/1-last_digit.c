#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print the last digit and compare it to a few cases
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastDigit = n % 10;
	printf("Last digit of %d ", n);
	if (lastDigit > 5)
	{
		printf("and is greater than 5\n");
	} else if (lastDigit == 0)
	{
		printf("and is 0\n");
	} else if (lastDigit < 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
