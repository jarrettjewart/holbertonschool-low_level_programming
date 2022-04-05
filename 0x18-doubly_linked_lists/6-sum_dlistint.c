#include "lists.h"

/**
 * sum_dlistint - return summ of all nodes in list
 * @head: head of the list
 * Return: sum of nodes
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
