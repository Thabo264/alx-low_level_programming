#include "main.h"
/**
 * swap_int - a function that swaps the value of two intagers.
 * a function that swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 */
void swap_in(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
