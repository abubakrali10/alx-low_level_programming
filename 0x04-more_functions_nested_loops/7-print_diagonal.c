#include "main.h"

/**
  * print_diagonal - Entry point
  * @n: the number of times the character \ should be printed
  * Return: print n of \ char
  */

void print_diagonal(int n)
{
	if (n > 0)
	{
		for (int i = 0; i <= n; i++;)
		{
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
