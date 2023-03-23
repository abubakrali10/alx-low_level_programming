#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints strings.
 * @n: number of arguments
 * @separator: character separator of numbers
 * Return: Always 0.
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
