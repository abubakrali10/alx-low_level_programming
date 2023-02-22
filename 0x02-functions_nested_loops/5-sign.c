#include "main.h"

/**
  * print_sign - Entry point
  * @n: number to be checked
  * Return: 1 if n > 0 and 0 if n = 0 -1 if n < 0 and 2 for anything else
  */

int print_sign(int n)
{
	if (n > 0) 
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		return (2);
	}
}
