#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a list
 * @h: a list of numbers
 *
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	int len = 0;

	for (len = 0; h != NULL; ++len)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (len);
}
