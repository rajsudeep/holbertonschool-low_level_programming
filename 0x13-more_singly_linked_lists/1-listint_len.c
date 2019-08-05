#include "lists.h"
#include <stdio.h>

/**
 * listint_len - finds number of nodes of a list
 * @h: a list of numbers
 *
 * Return: number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	int len = 0;

	for (len = 0; h != NULL; ++len)
		h = h->next;
	return (len);
}
