#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: var for s
 */

void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')\
	{
		i++;
	}

	for (i = n - 1; i >= 0; i--)
	{
		*s = s[i];
	}
}
