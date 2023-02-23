#include "main.h"

/**
  * _isdigit - Entry point
  * @c: number to be checked
  * Return: 1 for digit or 0 for everything else
  */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
