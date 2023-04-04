#include "lists.h"

/**
 * free_listint - frees a singly linked list
 * @head: pointer to head of a singly linked list
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
		free_listint(head);
	}
}
