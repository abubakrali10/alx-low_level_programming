#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary of a number
 * @n: number
 * Return: nothing (void)
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while ((1UL << count) <= n)
	{
		count++;
	}

	for (i = count - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}
