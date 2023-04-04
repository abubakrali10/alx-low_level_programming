#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds new node at begin of linked list
 * @head: pointer to first node of the list
 * @n: data to sent to the new node
 * Return: address of new element or null if faild
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;
	ptr->next = *head;
	head = ptr;

	return (*head);
}
