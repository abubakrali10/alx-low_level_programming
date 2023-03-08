#include "main.h"

/**
 * factorial - a function that calculate factorial of a given number.
 * @n: numer that we calculate factorial of.
 * Return: factorial of n or if n < 0 - -1 to indicate an error.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
