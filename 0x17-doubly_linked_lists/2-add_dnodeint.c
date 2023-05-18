#include "lists.h"

/**
 * add_dnodeint - adding new node at the beginning of a doubly linked list
 * @head: head of the list
 * @n: data for the list
 * Return: the added new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
		new_node->next = NULL;
	}
	else
	{
		dlistint_t *temp = NULL;

		temp = *head;
		*head = new_node;
		new_node->prev = NULL;
		new_node->next = temp;
		temp->prev = *head;
	}

	return (new_node);
}
