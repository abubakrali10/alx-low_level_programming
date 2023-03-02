#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string
 * @s: input string.
 * Return: the pointer to dest.
 */

char *cap_string(char *s)
{
	int count = 0, i;

	int word_sep_count = 13;

	char word_sep[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};
	
	while (s[count])
	{
		i = 0;

		while (i < word_sep_count)
		{
			if ((count == 0 || s[count - 1] == word_sep[i]) && (s[count] >= 97 && s[count] <= 122))
			{
				s[count] -= 32;
			}
			i++;
		}
		count++;
	}
	return (s);
}

