#include "main.h"


/**
 * print_rev - a function that prints a string, in reverse
 * @s: str input
 * Return: string in reverse
 */

void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}

	for (i -= 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
