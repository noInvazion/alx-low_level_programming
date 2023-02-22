#include "main.h"
/**
 * print_last_digit - returns the value of the last digit *
 * @n: variable
 *
 * Return:  value of last digits!
 */

int print_last_digit(int n)
{
	_putchar('0' + n);
	return (n % 10);
}
