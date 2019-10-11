#include "hash_tables.h"

/**
 * hash_djb2 - uses the djb2 algorithm to retrieve a hash
 * @str: string to make a hash for
 *
 * Return: A hash relative to string given
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
