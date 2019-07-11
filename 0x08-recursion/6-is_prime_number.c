#include "holberton.h"

int prime_test(int x, int y);

/**
 * is_prime_number - checks to see if number is prime
 *
 * @n: input number to check
 * Return: 1 if prime else 0
 *
 */
int is_prime_number(int n)
{
	return (prime_test(n, 2));
}

/**
 * prime_test - tests numbers starting from 2
 * to see if number is prime
 *
 * @x: number to check if prime
 * @y: tester divisor number
 * Return: 1 if prime else 0
 */
int prime_test(int x, int y)
{
	if (y == x)
		return (1);
	if (x % y == 0 || x < 2)
		return (0);
	return (prime_test(x, y + 1));
}
