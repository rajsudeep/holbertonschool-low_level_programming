#include "holberton.h"

int _strlen_recursion(char *s);
int palindrome_checker(char *s, int length);

/**
 * is_palindrome - finds if string s is a palindrome
 *
 * @s: string input
 * Return: 1 if palindrome else 0
 *
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (palindrome_checker(s, length));
}

/**
 * palindrome_checker - compares characters on both ends of s
 *
 * @s: string input
 * @length: length of string
 * Return: 1 if palindrome else 0
 *
 */
int palindrome_checker(char *s, int length)
{
	if (length == 1 || length == 0)
		return (1);
	else if (*s == *(s + length - 1))
	{
		return (palindrome_checker(s + 1, (length - 1) - 1));
	}
	else
		return (0);
}


/**
 * _strlen_recursion - finds the length of a string
 *
 * @s: input string
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
