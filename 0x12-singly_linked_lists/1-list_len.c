#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - calculate number of elements in linkedlist
 * @h: singly linkedlist
 * Return: number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t x = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		x++;
		temp = temp->next;
	}

	return (x);
}
