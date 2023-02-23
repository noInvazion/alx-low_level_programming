#include "main.h"
/**
 * times_table - prints the 9 timetable
 *
 * Return:  value of last digits!
 */

void times_table(void)
{
	int i, n;

	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i <= 9; i++)
		{
			int calc = n * i;

			if (i == 0)
			{
				_putchar(calc + '0');
			}
			else if (calc < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(calc + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((calc / 10) + '0');
				_putchar((calc % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
