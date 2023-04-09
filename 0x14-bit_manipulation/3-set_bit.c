#include "main.h"
#include <stdio.h>

/**
 * set_bit - set bit value to 1 at given index
 * @n: pointer to the number
 * @index: index to be manipulated
 * Return: 1 if it worked -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= (1UL << index);

	return (1);
}
