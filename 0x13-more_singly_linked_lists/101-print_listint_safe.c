#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints all the elements of a list (including loops)
 * @head: a list of numbers
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	int len = 0;

	for (len = 0; head != NULL; ++len)
	{
		printf("[%p] %i\n", (void *)head, head->n);
		head = head->next;
		if (head <= head->next)
		{
			printf("-> [%p] %i\n", (void *)head, head->n);
			exit(98);
		}
	}
	return (len);
}
