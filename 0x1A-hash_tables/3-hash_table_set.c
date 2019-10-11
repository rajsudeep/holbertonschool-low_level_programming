#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: key of element to add
 * @value: value of element to add
 *
 * Return: On success 1 else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_hash, *tmp;
	unsigned long int i;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);

	for (tmp = ht->array[i]; tmp != NULL; tmp = tmp->next)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
	}

	new_hash = malloc(sizeof(hash_node_t));
	if (new_hash == NULL)
		return (0);
	new_hash->key = strdup(key);
	new_hash->value = strdup(value);
	new_hash->next = ht->array[i];
	ht->array[i] = new_hash;
	return (1);
}
