#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - function prints all elements within singly linked list
 * @h: head pointer to the singly linked list
 * Return: count of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	const listint_t *ptr = NULL;

	ptr = h;

	while (ptr != NULL)
	{
		count++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (count);
}
