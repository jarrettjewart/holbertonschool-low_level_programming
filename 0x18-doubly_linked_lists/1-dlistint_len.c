#include "lists.h"

/**
 * dlistint_len - adds new node at end of list
 * @h: head of list
 * Return: nodes of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
