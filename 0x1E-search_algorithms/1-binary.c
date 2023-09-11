#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 * @array: a pointer to array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: index of value or -1 Otherwise
*/

int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid, i;

	if (array == NULL)
		return (-1);

	low = array[0];
	high = size - 1;

	while (low <= high)
	{
		mid = low + (high - low) / 2;
		printf("Searching in array: ");

		for (i = low; i <= high; i++)
		{
			if (i == high)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}

		if (value == array[mid])
			return (mid);
		if (value < array[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}

