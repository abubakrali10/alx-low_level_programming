#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: the hashtable
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j = 0;
	hash_node_t *traverse = NULL;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		traverse = ht->array[i];

		while (traverse)
		{
			if (j == 1)
				printf(", ");
			j = 1;

			printf("'%s': '%s'", traverse->key, traverse->value);
			traverse = traverse->next;
		}
	}
	printf("}\n");
}
