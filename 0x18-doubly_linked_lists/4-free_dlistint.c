#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		curr = head->next;
		free(head);
		head = curr;
	}
}
