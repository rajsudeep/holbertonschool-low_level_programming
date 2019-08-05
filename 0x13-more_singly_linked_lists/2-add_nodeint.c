#include "lists.h"

/**
 * add_nodeint - adds a new node to beginning of a list
 * @head: list of numbers
 * @n: data to add to new node
 *
 * Return: Address of new element else NULL
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!(new))
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
