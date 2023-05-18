#include "lists.h"

/**
 * add_dnodeint - adding new node at the beginning of a doubly linked list
 * @head: head of the list
 * @n: data for the list
 * Return: the added new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	if (*head == NULL)
	{
		dlistint_t *first_node = malloc(sizeof(dlistint_t));

		if (first_node == NULL)
			return (NULL);

		*head = first_node;
		first_node->n = n;
		first_node->prev = NULL;
		first_node->next = NULL;

		return (first_node);
	}
	else
	{
		dlistint_t *new_node = malloc(sizeof(dlistint_t));

		if (new_node == NULL)
			return (NULL);

		dlistint_t *temp = NULL;

		temp = *head;
		*head = new_node;
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = temp;
		temp->prev = *head;

		return (new_node);
	}
}
