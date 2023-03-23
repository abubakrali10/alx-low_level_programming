#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Entry Point
 * @separator: comma space
 * @n: number of elements
 * Return: void
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;
	char *str;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arguments, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (i < n - 1 && seperator)
		{
			printf("%s", seperator);
		}
	}
	va_end(arguments);

	printf("\n");
}
