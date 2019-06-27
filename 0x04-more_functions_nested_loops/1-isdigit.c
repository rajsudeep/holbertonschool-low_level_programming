#include "holberton.h"

/**
 * _isdigit - checks for a digit from 0 to 9
 * @c: character to check
 *
 * Return: On success 1
 *
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}
