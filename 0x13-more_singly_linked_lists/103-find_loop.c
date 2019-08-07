#include "lists.h"

/**
 * _find_listint_loop - finds the start of the loop
 * @head: pointer to the list with a loop
 * @marker: marked node where loop was certified
 *
 * Return: Address of the node where the loop starts
 */
listint_t *_find_listint_loop(listint_t *head, listint_t *marker)
{
	listint_t *curr = head;

	while (curr != marker)
	{
		curr = curr->next;
		marker = marker->next;
	}
	return (curr);
}

/**
 * find_listint_loop - detects for a loop in a list
 * @head: pointer to a list of numbers
 *
 * Return: Address of the node where loop starts
 * NULL if no loop exists
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *marker = head, *next = head;

	while (marker != NULL && next != NULL && next->next != NULL)
	{
		marker = marker->next;
		next = next->next->next;
		if (marker == next)
			return (_find_listint_loop(head, marker));
	}
	return (NULL);
}
