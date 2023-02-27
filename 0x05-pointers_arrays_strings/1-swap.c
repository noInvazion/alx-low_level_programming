#include "main.h"

/**
 * swap_int - function that swaps two integer values
 * @*a: var for a
 * @*b: var for b
 * @a: var for a?
 * @b: var for b?
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
