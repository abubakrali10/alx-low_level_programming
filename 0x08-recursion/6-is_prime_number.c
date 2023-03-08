#include "main.h"

/**
 * is_divisible - Checks if a number is divisible.
 * @n: the number to check for divisibility.
 * @i: the current integer to test for divisibility.
 *
 * Return: If i is one - 0.
 *         If the number is divisible by i - 1
 *	   otherwise return is_divisible(n, i - 1)
 */

int is_divisible(int n, int i)
{
	if (i == 0)
	{
		return (0);
	}
	else if (n % i == 0)
	{
		return (1);
	}
	else
	{
		return (is_divisible(n, i - 1));
	}
}

/**
 * is_prime_number - checks if an integer is prime.
 * @n: the integer to check.
 * Return: 1 if n is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return !is_divisible(n, n - 1);
	}
}
