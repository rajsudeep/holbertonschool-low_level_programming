#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint
 * @h: doubly linked list holding integers
 *
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int len;

	for (len = 0; h != NULL; h = h->next, len++)
		printf("%i\n", h->n);
	return (len);
}
