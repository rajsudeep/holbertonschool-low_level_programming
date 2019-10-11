#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: the key to search
 * @size: size of the array of the hash table
 *
 * Return: Index of where key should be stored in table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	unsigned long int i;

	hash = hash_djb2(key);
	i = hash % size;

	return (i);
}
