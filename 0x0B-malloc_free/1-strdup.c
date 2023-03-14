#include "main.h"
#include <stdlib.h>

/**
  * _strdup - Duplicate a string
  * @str: the string to duplicate
  *
  * Return: the string duplicated
  */

char *_strdup(char *str)
{
	int i, len = 0;
	char *copiedStr;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		len++;
	}

	copiedStr = malloc(sizeof(char) * len + 1);

	if (copiedStr == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		copiedStr[i] = str[i];
	}

	copiedStr[len] = '\0';

	return (copiedStr);
}
