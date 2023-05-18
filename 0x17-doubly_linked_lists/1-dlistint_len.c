#include "lists.h"

/**
 * dlistint_len - counts number of elements in a linked list
 * @h: head of the list
 * Return: number of elements in a list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements_count = 0;
	const dlistint_t *traverse = NULL;

	traverse = h;

	while (traverse != NULL)
	{
		elements_count++;
		traverse = traverse->next;
	}
	return (elements_count);
}
