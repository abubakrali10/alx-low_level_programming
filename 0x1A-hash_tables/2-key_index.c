#include "hash_tables.h"

/**
 * key_index - function that gives index of a key
 * @key: key to get index
 * @size: size of the hashtable
 * Return: index of key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
