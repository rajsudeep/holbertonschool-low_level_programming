#include "lists.h"

/**
 * sum_listint - sums all the data in a list
 * @head: list of numbers
 *
 * Return: The integer sum
 */
int sum_listint(listint_t *head)
{
	if (head != NULL)
		return (head->n + sum_listint(head->next));
	else
		return (0);
}
