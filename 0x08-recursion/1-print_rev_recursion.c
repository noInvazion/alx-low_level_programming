#include "main.h"
/**
 * _print_rev_recursion - function that puts a string in reverse
 * @s: poinnter variable to a variable of char datatype
 * noInvazion
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
