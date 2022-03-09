#include "lists.h"

/**
 * free_listint2 - frees memory in the list
 * @head: double ptr in the list
 */

void free_listint2(listint_t **head)
{
	listint_t *update;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		update = (*head)->update;
		free(*head);
		*head = update;
	}
}
