#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: list of numbers
 *
 * Return: Number value in head node deleted
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *current = *head;

	if (*head == NULL)
		return (0);
	num = current->n;
	*head = (*head)->next;
	free(current);
	return (num);
}
