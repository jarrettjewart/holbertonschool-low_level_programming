#include "lists.h"

/**
 * listint_len - prints count linked in the function listint_t
 * @h: pointer
 * Return: count of listint_t function
 */


size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
