#include "hash_tables.h"

/**
 * hash_table_set - adds an element to hashtable
 * @ht: hashtable
 * @key: key
 * @value: value
 * Return: 1 if succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_element = NULL, *traverse = NULL;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);
	index = hash_djb2((unsigned char *)key) % ht->size;
	new_element = malloc(sizeof(hash_node_t));
	new_element->key = strdup(key);
	new_element->value = strdup(value);

	if (new_element->key == NULL || new_element->value == NULL)
	{
		free(new_element);
		return (0);
	}
	new_element->next = NULL;

	if (ht->array[index] == NULL)
		ht->array[index] = new_element;
	else
	{
		traverse = ht->array[index];
		while (traverse != NULL)
		{
			if (strcmp(traverse->key, key) == 0)
			{
				free(new_element->key);
				free(new_element->value);
				free(new_element);
				free(traverse->value);
				new_element->value = strdup(value);
				return (1);
			}
			traverse = traverse->next;
		}
		new_element->next = ht->array[index];
		ht->array[index] = new_element;
	}
	return (1);
}
