#include "main.h"

/**
  * _abs - Entry point
  * @n: number to be checked
  * Return: absolute value of a number
  */

int _abs(int n)
{
	int abs_val;

	if (n < 0)
	{
		abs_val = n * -1;
		return (abs_val);
	}
	else
	{
		return (n);
	}
}
