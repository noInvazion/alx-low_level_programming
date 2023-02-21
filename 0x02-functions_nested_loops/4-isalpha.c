#include "main.h"
/**
 * _isalpha - chcecks for char alphabet
 *
 * @c: the variable to be checked
 *
 * Return: 1 if c is a letter, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
