#include "lists.h"

/**
 * get_dnodeint_at_index - finds the nth node of a dlist
 * @head: doubly linked list of integers
 * @index: the index of the node (where head node is at 0)
 *
 * Return: Address of nth node, NULL if node can't be found
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL; ++i)
	{
		if (i == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
