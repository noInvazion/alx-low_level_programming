#include "main.h"
/**
 * _puts - function to print a string followed by a new line
 * @str: var for str
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(str);
		str++;
	}
	_putchar(' ');
}
