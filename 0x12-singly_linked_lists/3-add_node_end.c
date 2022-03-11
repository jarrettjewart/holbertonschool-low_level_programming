#include "lists.h"

/**
 * _strlen - finds the length of a string
 * @str: string used to find length
 * Return: Length of string
 */

unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * add_node_end - adds a new ndoe to the end of the list
 * @head: dble ptr at the front of list
 * @str: string used to add the new node
 * Return: ptr to new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *old;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	old = *head;
	while (old->next)
		old = old->next;
	old->next = new;
	return (new);
}
