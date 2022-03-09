#include "lists.h"

/**
 * add_nodeint_end - adds node to the end of the list
 * @head: double ptr at front of list
 * @n: int that becomes new node
 * Return: new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *old;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	old = *head;
	while (old->next != NULL)
	{
		old = old->next;
	}
	old->next = new;
	return (new);
}
