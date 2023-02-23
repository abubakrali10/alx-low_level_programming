#include "main.h"

/**
  * print_line - Entry point
  * @n: number of char to be printed
  * Return: straight line depends on n
  */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
