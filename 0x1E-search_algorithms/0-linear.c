#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: a pointer to array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: index of value or -1 Otherwise
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			return (i);
		}
		else
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		}
	}
	return (-1);
}

