#include "lists.h"

/**
 * print_list - prints the list 
 * @h:ptr at start of the list
 * Return: nodes of the list
 */

size_t print_list(const list_t *h)
{
	const list_t *tmp;
	unsigned int i;

	tmp = h;
	for (i = 0; tmp; i++)
	{
		printf("[%u] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
	}
	return (i);
}

	
	



