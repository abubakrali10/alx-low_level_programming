#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: singly linkedlist
 * Return: number of elements in the list
 */

size_t print_list(const list_t *h)
{
	size_t x = 1;
	list_t *temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);
		x++;
		temp = temp->next;
	}
}
