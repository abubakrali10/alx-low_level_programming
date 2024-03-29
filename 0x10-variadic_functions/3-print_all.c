#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything, followed by a new line.
 * @format: A string of characters representing the argument types.
 * @...: A variable number of arguments to be printed.
 *
 * Description: Any argument not of type char, int, float,
 *              or char * is ignored.
 *              If a string argument is NULL, (nil) is printed instead.
 */

void print_all(const char * const format, ...)
{
	va_list arguments;
	int n = 0, i = 0;
	char *sep = ", ";
	char *str;

	va_start(arguments, format);

	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n  == (i - 1))
		{
			sep = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(arguments, int), sep);
			break;
		case 'i':
			printf("%d%s", va_arg(arguments, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(arguments, double), sep);
			break;
		case 's':
			str = va_arg(arguments, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, sep);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(arguments);
}
