#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: list of numbers
 */
void free_listint2(listint_t **head)
{
	listint_t *tmpCur = *head;
	listint_t *tmpNxt;

	while (tmpCur != NULL)
	{
		tmpNxt = tmpCur->next;
		free(tmpCur);
		tmpCur = tmpNxt;
	}
	*head = NULL;
	/*
	if (*head == NULL)
		return;
	free_listint(head->next);
	free(*head);
*/
}
