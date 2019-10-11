#include "hash_tables.h"

/**
 * hash_table_get - retrieve a value associated with a key
 * @ht: hash table
 * @key: key for value
 *
 * Return: On success value searched for else NULL for not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int i;

	if (ht != NULL)
	{
		i = key_index((const unsigned char *)key, ht->size);
		for (tmp = ht->array[i]; tmp != NULL; tmp = tmp->next)
			if (strcmp(tmp->key, key) == 0)
				return (tmp->value);
	}
	return (NULL);
}
