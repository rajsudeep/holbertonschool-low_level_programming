#include "lists.h"

/**
 * dlistint_len - get number of elements in dlist
 * @h: doubly linked list holding integers
 *
 * Return: The number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int len;

	for (len = 0; h != NULL; len++)
		h = h->next;
	return (len);
}
