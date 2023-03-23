#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Entry Point
 * @separator: comma space
 * @n: number of elements
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;
	char *str;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		str = (va_arg(arguments, char*));
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arguments);
}
