#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at given index
 * @head: double linked list of integers
 * @index: desired index of node to delete
 *
 * Return: On success 1, on failure -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *trash, *tmp = *head;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	while (--index && tmp->next != NULL)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}
	if (index)
		return (-1);
	trash = tmp->next;
	tmp->next = trash->next;
	if (tmp->next != NULL)
		tmp->next->prev = tmp;
	free(trash);
	return (1);
}
