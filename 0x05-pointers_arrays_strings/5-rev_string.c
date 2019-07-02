#include "holberton.h"

/**
 * rev_string - reverses a string
 *
 * @s: string to reverse
 *
 */
void rev_string(char *s)
{
	int front = 0;
	int back = 0;
	char c;

	while (s[front] != '\0')
		front++;
	while (back < front)
	{
		c = s[front - 1];
		s[front - 1] = s[back];
		s[back] = c;
		back++;
		front--;
	}
}
