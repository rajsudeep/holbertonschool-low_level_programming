#include "lists.h"

/**
 * reverse_listint - obtains reversed linked list
 * @head: a list of numbers
 *
 * Return: Pointer to the first node of new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr = *head, *next;

	if (*head == NULL || head == NULL)
		return (NULL);
	while (curr->next != NULL)
	{
		next = curr->next;
		curr->next = next->next;
		next->next = *head;
		*head = next;
	}
	return (*head);
}
