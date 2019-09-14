#include "lists.h"

/**
 * free_dlistint - free a dlist
 * @head: doubly linked list of integers
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	free_dlistint(head->next);
	free(head);
}
