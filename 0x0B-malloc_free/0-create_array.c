#include <stdlib.h>
#include "main.h"

/**
 * create_array - main entry
 * @size: size input
 * @c: char
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
