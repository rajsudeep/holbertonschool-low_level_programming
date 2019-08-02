#include <string.h>
#include "lists.h"

/**
 * _strlen - finds and returns length of string
 * @s: string value
 *
 * Return: length of string
 */
int _strlen(const char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	return (length);
}

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
	temp->len = _strlen(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
