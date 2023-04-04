#include <stdlib.h>
#include <stdio.h>
#include <lists.h>

/**
 * free_listint - free a listint_t linked list
 * @head: a pointer to head of singly linked list
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
