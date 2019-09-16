#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: doubly linked list at reference
 * @idx: position of node to insert
 * @n: new element's value
 *
 * Return: Address of the new node, on failure NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new, *tmp = *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (idx == 0)
	{
		new->next = *h;
		*h = new;
		return (new);
	}
	for (i = 0; i < idx; i++)
		tmp = tmp->next;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;
	return (new);
}
