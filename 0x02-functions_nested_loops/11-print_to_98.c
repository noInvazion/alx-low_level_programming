#include "main.h"
/**
 * print_to_98 - function that prints all numbers from n to 98
 * @n: variable for the starting point
 */

void print_to_98(int n)
{
	for (n = n; n <= 98; n++)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
