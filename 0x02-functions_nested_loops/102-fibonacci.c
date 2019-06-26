#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	long f0 = 0;
	long f1 = 1;
	long i, fn;

	for (i = 0; i < 50; i++)
	{
		fn = f0 + f1;
		f0 = f1;
		f1 = fn;
		printf("%ld, ", fn);
	}
	printf("\n");
	return (0);
}
