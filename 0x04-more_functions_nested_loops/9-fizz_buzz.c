#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100 But for multiples of three,
 *        print Fizz instead of the number, for multiples of five,
 *        print Buzz instead,for  multiples of both three and five,
 *	  print FizzBuzz instead.
 * Return: Always 0.
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");

		else if ((num % 3) == 0)
			printf("Fizz");

		else if ((num % 5) == 0)
			printf("Buzz");

		else
			printf("%d", num);

		printf(" ");
	}

	printf("\n");

	return (0);
}
