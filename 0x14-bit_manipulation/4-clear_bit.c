#include "main.h"
#include <stdio.h>

/**
 * clear_bit - set bit value to 0 at given index
 * @n: the number
 * @index: the index
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	unsigned long int mask = ~(1UL << index);
	*n &= mask;

	return (1);
}
