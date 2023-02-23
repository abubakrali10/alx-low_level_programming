#include <stdio.h>

/**
  * _isupper - Entry point
  * @c: character to be checked
  * Return: 1 for uppercase char or 0 for lowercase
  */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
