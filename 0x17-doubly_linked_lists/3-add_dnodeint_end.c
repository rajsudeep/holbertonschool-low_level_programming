#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlist
 * @head: dlist at its reference
 * @n: new element value
 *
 * Return: Address of the new element, on failure NULL
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *h = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new;
		new->prev = h;
	}
	return (new);
}
