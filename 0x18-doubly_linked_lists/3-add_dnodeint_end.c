#include "lists.h"

/**
 * add_dnodeint_end - adds new node at end of list
 * @head: head of list
 * @n: node
 * Return: new node or NULL if fail
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *dlist;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		printf("Error: Can't malloc\n");
		return (NULL);
	}
	new->n = n;

	dlist = *head;

	if (head && *head)
	{
		while (dlist->next != NULL)
		{
			dlist = dlist->next;
		}

		dlist->next = new;
		new->next = NULL;
		new->prev = dlist;
		dlist = new;
	}
	else
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
	}
	return (new);
}
