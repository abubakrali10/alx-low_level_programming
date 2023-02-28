#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to a char.
 * Return: The length of @s
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s++)
	{
		len++;
	}
	return (len);
}
