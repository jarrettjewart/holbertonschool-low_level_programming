#include "lists.h"

/**
 * insert_nodeint_at_index - puts new node at postion
 * @head: double ptr at the front of list
 * @idx: index for node
 * @n: new node
 * Return: ptr to the indexed node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *old, *new;

	if (head == ULL)
		return (NULL);
	if(idx != 0)
	{
		old = *head;
		for (x = 0; x < idx - 1 && old != NULL; x++)
		{
			old = old->next;
		}
		if (old == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = old->next;
	old->next = new;
	return (new);
}
