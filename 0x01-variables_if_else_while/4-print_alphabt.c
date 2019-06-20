#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print the alphabet without q and e in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	char str[26] = "abcdefghijklmnopqrstuvwxyz";

	while (i < 26)
	{
		if (!(str[i] == 'e' || str[i] == 'q'))
		{
			putchar(str[i]);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
