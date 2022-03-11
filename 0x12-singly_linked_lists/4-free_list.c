#include "lists.h"

/**
 * free_list - frees the list
 * @head: ptr at the front of list
 */

void free_list(list_t *head)
{
	list_t *current, *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
