#include "main.h"

/**
  * _islower - Entry point
  * @c: character to be checked
  * Return: 1 for lowercase char and 0 for everthing else
  */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
