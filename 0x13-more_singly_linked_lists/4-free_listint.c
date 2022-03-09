#include "lists.h"

/**
 * free_listint - frees up the list
 * @head: ptr at the front of list
 */

void free_listint(listint_t *head)
{
	listint_t *update;

	while (head != NULL)
	{
		update = head->next;
		free(head);
head = update;
	}
}
