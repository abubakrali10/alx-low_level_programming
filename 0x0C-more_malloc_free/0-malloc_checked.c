#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - Entry Point
 * @b: input amount
 * Return: pointer to new mem
 */

void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);
	if (memory == NULL)
	{
		exit(98);
	}
	return (memory);
}
