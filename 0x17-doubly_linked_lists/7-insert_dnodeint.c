#include "lists.h"

/**
 * insert_dnodeint_at_index - inserting node at specific position
 * @h: head of the list
 * @idx: position to insert the node at
 * @n: data for the new node
 * Return: for inserting success return the node else return NULL
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *traverse = *h, *new_node;
	unsigned int count = 0;

	if (*h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (traverse != NULL && count < idx - 1)
	{
		traverse = traverse->next;
		count++;
	}

	if (traverse == NULL && count < idx - 1)
		return (NULL);

	if (traverse == NULL || traverse->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = traverse;
	new_node->next = traverse->next;
	traverse->next->prev = new_node;
	traverse->next = new_node;

	return (new_node);
}
