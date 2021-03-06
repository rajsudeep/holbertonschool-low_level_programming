#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: list of numbers
 */
void free_listint2(listint_t **head)
{
	listint_t *tmpCur;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			tmpCur = *head;
			*head = (*head)->next;
			free(tmpCur);
		}
		*head = NULL;
	}
}
