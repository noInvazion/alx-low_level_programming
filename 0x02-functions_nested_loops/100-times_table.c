#include "main.h"
/**
 * print_times_table - a function that prints a timetable
 * @n: variable that holds the integer value
 */

void print_times_table(int n)
{
	int multi, i;

	if (n <= 15 && n >= 0)
	{
		for (n = 0; n <= n; n++)
		{
			for (i = 0; i <= n; i++)
			{
				multi = n * i;
				if (multi == 0)
				{
					_putchar(multi + '0');
				}
				else if (multi < 10)
				{
					_putchar(',');
					_putchar(' ');
					putchar(' ');
					_putchar(' ');
					_putchar(multi);
				}
				else if (multi < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((multi / 10) + '0');
					_putchar((multi % 10) + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((multi / 100) + '0');
					_putchar((multi % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}
				
