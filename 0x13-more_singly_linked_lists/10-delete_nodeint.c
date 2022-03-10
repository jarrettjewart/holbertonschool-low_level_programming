#include "lists.h"

/**
 * delete_nodeint_at_index - delets node in the list
 * @head: dble ptr first in the list
 * @index: index of node to delete
 * Return: ptr of the indexed node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *old, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	old = *head;
	for (x = 0; x < index - 1; x++)
	{
		if (old->next == NULL)
			return (-1);
		old = old->next;
	}
	next = old->next;
	old->next = next->next;
	free(next);
	return (1);
}

