#include "main.h"
#include <stdio.h>

/**
 * get_endianness - check endianness
 * Return: 0 for big endianness or 1 for little endianness
 */
int get_endianness(void)
{
	int x = 1;
	char *c = (char *) &x;

	return (*c == 1);
}
