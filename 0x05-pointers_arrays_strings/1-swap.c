#include "main.h"

/**
 * swap_int - function that swaps two integer values
 * @a: var for a
 * @b: var for b
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

	return (0);
}
