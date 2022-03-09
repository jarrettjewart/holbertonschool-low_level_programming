#include "lists.h"

/**
 * pop_listint - deletes specific node from a list
 * @head: double ptr at front of list
 * Return: updated list
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	node = *head;
	*head = node->next;
	n = node->n;
	free(node);
	return (n);
}
