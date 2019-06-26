#include <stdio.h>

/**
 * main - print only even fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	long f0 = 1;
	long f1 = 2;
	long fn, fn_2;

	fn_2 = 2;
	fn = 0;
	while (fn < 4000000)
	{
		fn = f0 + f1;
		if ((fn % 2) == 0)
			fn_2 += fn;
		fn = f0 + f1;
		f0 = f1;
		f1 = fn;
	}
	printf("%ld\n", fn_2);
	return (0);
}
