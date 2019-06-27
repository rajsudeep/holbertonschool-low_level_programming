#include "holberton.h"
#include <stdio.h>

/**
 * fizz_buzz - print fizz for mults of 3 and buzz for 5
 *
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		printf(" ");
	}
}

/**
 * main - run fizz_buzz
 *
 * Return: 0 on success
 *
 */
int main(void)
{
	fizz_buzz();
	return (0);
}
