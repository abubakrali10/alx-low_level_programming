#include "hash_tables.h"

/**
 * hash_table_get - gets a value associated with a key
 * @ht: hashtable
 * @key: key
 * Return: value or NULL if key couldn't found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *traverse = NULL;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = hash_djb2((unsigned char *)key) % ht->size;

	traverse = ht->array[index];

	while (traverse != NULL)
	{
		if (strcmp(key, traverse->key) == 0)
			return (traverse->value);
		traverse = traverse->next;
	}
	return (NULL);
}
