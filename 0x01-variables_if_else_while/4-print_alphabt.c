#include <stdio.h>

/**
 * main - a function that print alphabet in lowercase except for 'q' and 'e'
 *
 * Return: 0 (Success)
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		if (c == 'q' || c == 'e')
			continue;
		else 
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
