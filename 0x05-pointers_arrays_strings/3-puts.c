#include "main.h"
/**
 * _puts - function to print a string followed by a new line
 * @str: var for str
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
