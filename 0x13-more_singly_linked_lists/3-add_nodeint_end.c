#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a list
 * @head: list of numbers
 * @n: number to add
 *
 * Return: Address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	/* Initialize the new node */
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (*head == NULL)
		*head = new;
	else
	{
		/* Scan list to find reference to last node */
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
