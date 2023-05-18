#include "lists.h"

/**
 * get_dnodeint_at_index - retrive a node by index
 * @head: head of the doubly linked list
 * @index: index to search for
 * Return: if find node return the (node) else return (NULL)
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int temp_index = 0;
	dlistint_t *traverse = head;

	while (traverse != NULL)
	{
		if (temp_index == index)
		{
			return (traverse);
		}
		temp_index++;
		traverse = traverse->next;
	}
	return (NULL);
}
