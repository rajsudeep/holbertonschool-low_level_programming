#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node to the beginning of the list
 * @head: pointer that points to the beginning of a list
 * @str: string value to add to new node
 *
 * Return: address of new element else NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
