#include "holberton.h"

/**
 * wildcmp - compare a file to a file with potential
 * wildcard notation
 *
 * @s1: file name
 * @s2: file name with wildcard or other notation
 * Return: if similar 1, else 0
 *
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && (*s2 == '\0' || *(s2 + 1) == '\0'))
		return (1);
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s1 != *s2 && *s2 != '*' && *s1 == '-')
		return (1);
	else if (*s1 != *s2 && *s2 != '*')
		return (0);
	else if (*s1 != *s2 && *s2 == '*')
	{
		if (*s1 == *(s2 + 1))
			return (wildcmp(s1, s2 + 1));
		else if (*s1 != *s2 + 1)
		{
			if (*(s2 + 1) == '*')
				return (wildcmp(s1, s2 + 1));
			else
				return (wildcmp(s1 + 1, s2));
		}
		else
			return (0);
	}
	else
		return (0);
}
