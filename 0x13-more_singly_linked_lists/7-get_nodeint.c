#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: ptr to first node of list
 * @index: index of node to reutern
 * Return: ptr to the indexed node we returned
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
