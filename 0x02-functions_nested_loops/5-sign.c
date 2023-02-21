#include "main.h"
/**
 * print_sign - a function for numbers check
 *
 * Return: 0 if some condiitons are met, returns 0 when others are met
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		 return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
	
