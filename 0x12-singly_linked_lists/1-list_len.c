#include "lists.h"

/**
 * list_len - prints length of list_t
 * @h: ptr
 * Return: length
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
