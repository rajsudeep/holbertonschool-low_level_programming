#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a list
 * @head: list of numbers
 * @index: index where node must be deleted
 *
 * Return: On success 1 else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;

	if (head == NULL)
		return (-1);
	if (index != 0)
	{
		if (*head != NULL)
			return (delete_nodeint_at_index(&(*head)->next,
							index - 1));
		else
			return (-1);
	}
	if (*head == NULL)
		return (-1);
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (1);
}
