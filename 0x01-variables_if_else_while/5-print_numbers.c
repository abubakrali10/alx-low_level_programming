#include <stdio.h>

/**
 * main - a function prints all single digit numbers base 10 starting from 0
 *
 * Return: 0 (Success)
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
