#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of dlistint_t list
 * @h: head of the list
 * Return: number of nodes in a list
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes_num = 0;
	const dlistint_t *traverse = NULL;

	traverse = h;

	while (traverse != NULL)
	{
		nodes_num++;
		printf("%d\n", traverse->n);
		traverse = traverse->next;
	}
	return (nodes_num);
}
