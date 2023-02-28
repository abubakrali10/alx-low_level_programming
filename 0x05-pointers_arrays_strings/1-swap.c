#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to first int to be swapped.
 * @b: pinter to be swapped with @a
 */

void swap_int(int *a, int *b) {
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
