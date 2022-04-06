#include "lists.h"

/**
 * create_dnode - creates new node
 * @n: data of node
 * @prev: prev node
 * @next: next node
 * Return: ptr to new node
 */

dlistint_t *create_dnode(int n, dilistint_t *prev, dlistint_t *next)
{
	dlistint_T *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = prev;
	new->next = next;
	return (new);
}

/**
 * insert_dnodeint_at_index - inserts new node at specific spot
 * @h: head of list
 * @idx: index of new node
 * @n: new node
 * Return:address of new node or NULL if fail
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr = *h, *localPrev = NULL;
	unsigned int count = 0;

	if (!h)
		return (NULL);
	if (idx == 0)
	{
		if (!*h)
			*h = create_dnode(n, NULL, NULL);
		else
		{
			(*h)->prev = create_dnode(n, NULL, *h);
			*h = (*h)->prev;
		}
		return (*h);
	}
	for (curr = *h; curr && (count < idx); curr = curr->next, count++)
	{
		localPrev = curr;
	}
	if ((count == idx) && (curr == NULL))
	{
		localPREV->next = create_dnode(n, localPrev, NULL);
		return (localPrev->next);
	}
	if ((count < idx) && (curr == NULL)
			return (NULL);
			if (localPrev != NULL)
			{
			localPrev->next = create_dnode(n, localPrev, curr);
			curr->prev = localPrev->next;
			return (localPrev->next);
			}
			return (NULL);
			}
