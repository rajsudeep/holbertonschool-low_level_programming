#include "lists.h"

/**
 * _reverse_listint - takes a reference to list in order to reverse
 * @head: list of numbers
 * @curr: pointer starting from head of list
 */
void _reverse_listint(listint_t **head, listint_t *curr)
{
	listint_t *next;
	if (curr->next == NULL)
	{
		*head = curr;
		return;
	}
	_reverse_listint(head, curr->next);
	next = curr->next;
	next->next = curr;
	curr->next = NULL;
}

/**
 * reverse_listint - obtains reversed linked list
 * @head: a list of numbers
 *
 * Return: Pointer to the first node of new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr = *head;

	if (head == NULL)
		return (NULL);
	_reverse_listint(head, curr);
	return (curr);
}
