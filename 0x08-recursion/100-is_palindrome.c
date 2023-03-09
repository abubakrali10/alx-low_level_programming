#include "main.h"

int is_palindrome_helper(char *s, int start, int end);
int find_strlen(char *s);
int is_palindrome(char *s);

/**
 * is_palindrome_helper - a helper function for is_palindrome function.
 * @s: string to check.
 * @start: the starting index to check.
 * @end: the ending index to check.
 * Return: 1 if the string between start and end indices is palindrome,
 * 0 otherwise
 */

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
		return (is_palindrome_helper(s, start + 1, end - 1));
	}
}

/**
 * find_strlen - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}

	return (len);
}

/**
 * is_palindrome - function that checks if a string is a plaindrome.
 * @s: the string to check.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int len = find_strlen(s);
	return is_palindrome_helper(s, 0, len - 1);
}
