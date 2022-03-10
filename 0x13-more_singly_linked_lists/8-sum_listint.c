#include "lists.h"

/**
 * sum_listint - reutrnbs the sum of n in the list
 * @head: ptr to first node in list
 * Return: sum of data from n
 */


int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
