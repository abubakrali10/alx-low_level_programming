#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int str_len(char *s);

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int index, combined_index = 0; length = 0;
	char *combined_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	length = str_len(s1) + str_len(s2);
	combined_str = malloc(sizeof(char) * length);

	if (combined_str == NULL)
	{
		return (NULL);
	}

	for (index = 0; s1[index]; index++)
	{
		combined_str[combined_index++] = s1[index];
	}

	for (index = 0; s2[index]; index++)
	{
		combined_str[combined_index++] = s2[index];
	}
	return (combined_str);
}

/**
 * str_len - returns the length of a string
 * @s: pointer to a char.
 * Return: The length of @s
 */

int str_len(char *s)
{
	int i, len = 0;

	for (i = 0; s[i]; i++)
	{
		len++;
	}
	return (len);
}
