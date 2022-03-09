#include "lists.h"

/**
 * print_listint - prints function of listint_t
 * @h: list
 * Return: list
 */


size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
