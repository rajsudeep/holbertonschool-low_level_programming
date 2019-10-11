#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *next;
	unsigned int i;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			free(tmp->key), free(tmp->value);
			next = tmp->next;
			free(tmp);
			tmp = next;
		}
	}
	free(ht->array);
	free(ht);
}
