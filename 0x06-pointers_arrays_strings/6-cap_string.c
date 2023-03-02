#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string
 * @str: input string.
 * Return: the pointer to dest.
 */

char *cap_string(char *str)
{
	int count = 0, i;
	int word_sep_count = 13;
	char word_sep[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (str[count])
	{
		i = 0;

		while (i < word_sep_count)
		{
			if ((count == 0 || str[count - 1] == word_sep[i]) && (str[count] >= 97 && str[count] <= 122))
				str[count] -= 32;

			i++;
		}

		count++;
	}

	return (str);
}
