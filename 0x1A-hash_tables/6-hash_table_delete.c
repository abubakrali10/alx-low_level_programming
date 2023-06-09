#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to be deleted
 * Return: nothing
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *traverse = NULL;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		traverse = ht->array[i];

		while (traverse != NULL)
		{
			ht->array[i] = traverse->next;
			free(traverse->key);
			free(traverse->value);
			free(traverse);
			traverse = ht->array[i];
		}
		ht->array[i] = NULL;
	}
	free(ht->array);
	free(ht);
}
