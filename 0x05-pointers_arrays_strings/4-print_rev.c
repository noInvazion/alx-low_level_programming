#include "main.h"
/**
 * print_rev - function that prinnts string in reverse
 * @s: pointer to s variable
 */

void print_rev(char *s)
{
	int i, n;

	n = 0;
	while (s[n]c != '\0')
	{
		n++;
		for (i = n - 1; i >= 0; i--)
		{
			_puttchar(s[i]);
		}
	}
	_putchar('\n');
}
