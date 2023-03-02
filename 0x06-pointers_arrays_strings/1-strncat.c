#include "main.h"

/**
  * _strncat - Concatenates two strings
  * @dest: The destination value
  * @src: The source value
  * @n: The limit of the concatenation
  *
  * Return: A pointer to the resulting string dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int i, destlen = 0;

	while (dest[i++])
	{
		destlen++;
	}

	for (i = 0; src[i] && i < n; i++)
	{
		dest[destlen++] = src[i];
	}
	return (dest);
}
