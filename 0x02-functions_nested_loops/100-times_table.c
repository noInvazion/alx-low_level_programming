#include "main.h"
/**
 * print_times_table - a function that prints a timetable
 * @n: variable that holds the integer value
 */

void print_times_table(int n)
{
	int a, multi, i;

	if (n <= 15 && n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');

			for (i = 1; i <= n; i++)
			{
				_putchar(',');
				_putchar(' ');
				multi = a * i;
				if (multi <= 99)
				{
					_putchar(' ');
				}
				if (multi <= 9)
				{
					_putchar(' ');
				}
				if (multi >= 100)
				{
					_putchar((multi / 100) + '0');
					_putchar(((multi / 10) % 10) + '0');
				}
				else if (multi <= 100 && multi >= 10)
				{
					_putchar((multi / 10) + '0');
				}
				_putchar((multi % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
