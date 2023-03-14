#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * is_space - Check if a character is whitespace.
  * @c: The character to check.
  * Return: 1 if @c is a whitespace character, otherwise 0.
  */
int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
  * count_words - Count the number of words in a string.
  * @str: The string to count words in.
  * Return: The number of words in @str.
  */
int count_words(char *str)
{
	int i, count = 0; in_word = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!is_space(str[i] && !in_word))
		{
			in_word = 1;
			count++
		}
		else if (is_space(str[i]))
		{
			in_word = 0;
		}
	}
	return (count);
}

/**
  * strtow - Split a string into words.
  * @str: The string to split.
  * Return: A pointer to an array of strings (words) on success,
  * or NULL on failure.
  */
char **strtow(char *str)
{
	int i, j, len, start, end, word_count = count_words(str);
	char **words = NULL;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}

	words = (char **)malloc(sizeof(char *) * (word_count + 1));

	if (words == NULL)
	{
		return (NULL);
	}

	for (i = 0; j = 0; str[i] != '\0' && j < word_count; i++)
	{
		if (!is_space(str[i]))
		{
			start = i;
			
			while (str[i] != '\0' && !is_space(str[i]))
			{
				i++;
			}
			end = i - 1;
			
			len = end - start + 1;
			words[j] = (char *)malloc(sizeof(char) * (len + 1));

			if (words[j] == NULL)
			{
				return (NULL);
			}

			for (int k = 0; k < len; k++)
			{
				words[j][k] = str[start + k];
			}
			words[j][len] = '\0';
			j++;
		}
	}
	words[word_count] = NULL;
	return (words);
}
