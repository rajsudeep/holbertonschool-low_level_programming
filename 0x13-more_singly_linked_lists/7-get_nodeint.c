#include "lists.h"

/**
 * get_nodeint_at_index - find nth node in list
 * @head: list of numbers
 * @index: location of desired node
 *
 * Return: the nth node if found else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i;

	for (i = 0; node != NULL; ++i)
	{
		if (i == index)
			return (node);
		node = node->next;
	}
	return (NULL);
}
