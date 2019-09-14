#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlist
 * @head: dlist at its reference
 * @n: value of new element
 *
 * Return: The address of the new element, on failure NULL
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (*head == NULL)
	{
		*head = new, new->next = NULL;
		return (new);
	}
	(*head)->prev = new;
	new->next = *head;
	*head = new;
	return (new);
}
