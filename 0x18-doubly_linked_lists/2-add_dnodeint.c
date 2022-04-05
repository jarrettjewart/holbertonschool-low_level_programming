#include "lists.h"

/**
 * add_dnodeint - adds new node at end of the list
 * @head: head of list
 * @n: node
 * Return: address of new node or NULL is fail
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		printf("Error: Can't malloc\n");
		return (NULL);
	}
	new->n = n;

	if (head && *head)
	{
		(*head)->prev = new;
		new->next = *head;
		new->prev = NULL;
		*head = new;
	}
	else
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
	}
	return (new);
}
