#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s: str input
 * Return: string in reverse
 */

void print_rev(char *s)
{
	int length = 0;
	int index;

	while (s[index++])
	{
		length++;
	}

	for (index = length - 1; index >= 0; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
