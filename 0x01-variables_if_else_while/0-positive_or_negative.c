#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/**
 * main - function to show the value of n if it's positive,negative or = 0
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
