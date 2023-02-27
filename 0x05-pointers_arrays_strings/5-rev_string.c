#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: var for s
 */

void rev_string(char *s)
{
	int i, n;

	n = 0;

	while (s[n] != '\0')\
	{
		n++;
	}

	for (i = n - 1; i >= 0; i--)
	{
		*s = s[i];
	}
}
