#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: input to reverse
 * Return: string and in reverse
 */
void rev_string(char *s)
{
	char rev = s[0];
	int index = 0;
	int i;

	while (s[index] != '\0')
		index++;

	for (i = 0; i < index; i++)
	{
		index--;
		rev = s[i];
		s[i] = s[index];
		s[index] = rev;
	}
}
