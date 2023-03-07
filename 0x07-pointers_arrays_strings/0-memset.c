#include "main.h"
/**
 * memset -function that fills the memory by n bytes
 * @s: variable s is a pointer variable to char datatype
 * @b: this is a constant byte
 * n: variable n
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return s;
}
