#include "sort.h"

/**
 * insertion_sort_list - sorts a linked list by swapping nodes
 * @list: list of integers
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *prev;

	if (list == NULL || *list == NULL)
		return;
	for (curr = (*list)->next; curr != NULL; curr = curr->next)
	{
		for (prev = curr->prev; prev != NULL; prev = prev->prev)
		{
			if (prev->n > curr->n)
			{
				if (curr->next != NULL)
					(curr->next)->prev = prev;
				prev->next = curr->next;
				curr->prev = prev->prev;
				curr->next = prev;
				if (prev->prev != NULL)
					(prev->prev)->next = curr;
				curr->prev = prev->prev;
				prev->prev = curr;
				if (curr->prev == NULL)
					*list = curr;
				print_list(*list);
			}
		}
	}
}
