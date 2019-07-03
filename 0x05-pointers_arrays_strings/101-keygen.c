#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - create random keys thats ascii values sum to 2772
 *
 * Return: On success 0.
 *
 */
int main(void)
{
	char asciivals[63] =
	"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char key[100];
	int count = 0;
	int i = 0;
	int val = 0;

	srand(time(NULL));
	for (; count < (2772 - 127); i++)
	{
		val = rand() % 62;
		key[i] = asciivals[val];
		count += asciivals[val];
	}
	val = 2772 - count;
	key[i] = val;
	key[++i] = '\0';
	printf("%s", key);
	return (0);
}
