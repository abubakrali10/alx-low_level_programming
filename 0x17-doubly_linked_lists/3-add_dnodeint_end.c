#include "lists.h"

/**
 * add_dnodeint_end - adding node to the end of a doubly linked list
 * @head: head of the doubly linked list
 * @n: data for the inserted node
 * Return: address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		dlistint_t *traverse = *head;

		while (traverse->next != NULL)
		{
			traverse = traverse->next;
		}
		traverse->next = new_node;
		new_node->prev = traverse;
	}

	return (new_node);
}
