#include "holberton.h"

/**
 * _atoi - convert string to integer (taking account of signs in string)
 *
 * @s: string to convert
 * Return: converted integer value
 *
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = -1;
	int i = 0;

	for (; s[i] != '\0' && (s[i] < '0' || s[i] > '9'); i++)
	{
		if (s[i] == '-')
			sign *= -1;
	}
	for (; s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'); i++)
		result = (result * 10) - (s[i] - '0');
	result *= sign;
	return (result);
}
