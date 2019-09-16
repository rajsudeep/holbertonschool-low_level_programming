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
	dlistint_t *new, *tmp = *h;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (idx != 0 && tmp->next != NULL)
	{
		if (tmp == NULL)
		{
			free(new);
			return (NULL);
		}
		tmp = tmp ->next, idx--;
	}
	if (idx != 0)
	{
		free(new);
		return (NULL);
	}
	new->prev = tmp;
	new->next = tmp->next;
	if (tmp->next)
		tmp->next->prev = new;
	tmp->next = new;
	return (new);
}
