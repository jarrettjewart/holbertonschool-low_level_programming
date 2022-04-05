#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: head node of list
 * @index: index of nodes starting at 0
 * Return: node or NULL if fail
 */

dlistint_t *getdnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *curr = head;

	if (!head)
		return (NULL);
	if (index == 0)
		return (head);

	while ((curr != NULL) && (count < index))
	{
		curr = curr->next;
		count++;
	}
	if ((count < index) || (curr == NULL))
		return (NULL);
	else
		return (curr);
}
