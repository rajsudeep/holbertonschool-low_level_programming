#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: input list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t len;

	for (len = 0; h; len++)
	{
		(h->str) ? printf("[%i] %s\n", h->len, h->str) :
			printf("[0] (nil)\n");
		h = h->next;
	}
	return (len);
}
