#include "lists.h"

/**
 * sum_dlistint - sum of all the data of a dlist
 * @head: doubly linked list of integers
 *
 * Return: Sum of the data else 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
		sum += head->n, head = head->next;
	return (sum);
}
