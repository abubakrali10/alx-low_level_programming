#include <stdlib.h>
#include <stdio.h>
#include <lists.h>

/**
 * free_listint - free a listint_t linked list
 * @head: a pointer to head of singly linked list
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
