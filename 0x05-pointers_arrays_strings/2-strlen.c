#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to a char.
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	
	while (*s != '\n')
	{
		len++;
		s++;
	}
	return len;
}
