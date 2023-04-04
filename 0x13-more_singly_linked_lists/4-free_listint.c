#include "lists.h"

/**
 * free_listint - frees a singly linked list
 * @head: pointer to head of a singly linked list
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	ptr = head;

	if (ptr != NULL)
	{
		ptr = ptr->next;
		free(head);
		head = ptr;
	}
}
