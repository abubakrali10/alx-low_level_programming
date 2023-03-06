#include "main.h"

/**
 * *_memset - function that fills memory with constant byts
 * @s : pointer to the memory are
 * @b : the constant bytes
 * @n : number of byes that should  be filled
 *
 * return : a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
	{
		*p++ = b;
	}
	return s;
}
