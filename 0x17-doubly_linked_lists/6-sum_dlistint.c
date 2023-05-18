#include "lists.h"

/**
 * sum_dlistint - sum all data of a doubly linked list
 * @head: head of a linked list
 * Return: the sum
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *traverse = head;
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (traverse != NULL)
	{
		sum += traverse->n;
		traverse = traverse->next;
	}

	return (sum);
}
