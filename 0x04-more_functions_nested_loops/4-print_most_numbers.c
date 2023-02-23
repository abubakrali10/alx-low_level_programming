#include "main.h"

/**
  * print_most_numbers - Entry point
  * Return: numbers from 0 to 9 but not 2 or 4
  */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
