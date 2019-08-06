#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: list of numbers
 * @idx: where the new node should be added
 * @n: data value to add
 *
 * Return: address of new node else NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp, *curr = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	for (i = 0; i != idx; i++)
		curr = curr->next;
	tmp = curr->next;
	curr->next = new;
	new->next = tmp;

	return (new);
}
