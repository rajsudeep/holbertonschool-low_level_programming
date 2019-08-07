#include "lists.h"

/**
 * free_listint2 - frees a list (including loops)
 * @head: list of numbers
 *
 * Return: Number of nodes freed from the list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmpCur;
	int len = 0;

	if (h != NULL)
	{
		for (; *h != NULL; len++)
		{
			if (*h > (*h)->next)
			{
				tmpCur = *h;
				*h = (*h)->next;
				free(tmpCur);
			}
			else
			{
				free(*h);
				*h = NULL;
			}
		}
	}
	return (len);
}
