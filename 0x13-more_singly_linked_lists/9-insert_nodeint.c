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
	listint_t *new;

	if (head == NULL || *head == NULL)
		return (NULL);

	if (*head != NULL && idx)
		return (insert_nodeint_at_index(&(*head)->next, idx - 1, n));
	if (idx)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
