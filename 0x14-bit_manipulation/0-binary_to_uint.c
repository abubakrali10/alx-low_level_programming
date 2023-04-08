#include "main.h"
#include <stdio.h>

/**
 * _strlen - calculate length of a string
 * @str: pointer to char
 * Return: length of a string
 */
int _strlen(char *str)
{
	int i = 0, len = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

/**
 * binary_to_uint - converting binary to unsigned int
 * @b: pointer to binary number to convert
 * Return: the converted result
 */
unsigned int binary_to_uint(char *b)
{
	int indx, powe = 1;
	unsigned int sum = 0;

	for (indx = _strlen(b); indx > 0; indx--)
	{
		if ((b[indx - 1] - '0') == 0 || (b[indx - 1] - '0') == 1)
		{
			sum += (b[indx - 1] - '0') * powe;
			powe *= 2;
		}
		else
		{
			return (0);
		}
	}
	return (sum);
}
