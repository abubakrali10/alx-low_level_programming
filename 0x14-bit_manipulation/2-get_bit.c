#include "main.h"
#include <stdio.h>

/**
 * get_bit - function get bit at specefic index
 * @n: the number
 * @index: the index
 * Return: value of bit or -1 when error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;
	int bit_value = -1;

	while (index-- > 0 && mask > 0)
		mask <<= 1;

	if (mask > 0 && (n & mask) == mask)
		bit_value = 1;
	else if (mask > 0)
		bit_value = 0;
	return (bit_value);
}
