#include "main.h"
/**
 * times_table - prints the 9 timetable
 *
 * Return:  value of last digits!
 */

void times_table(void)
{
	int i, n;

	for (n = 0; n < 9; n++)
	{
		for (i = 0; i <= 9; i++)
		{
			int calc = n * i;

			_putchar(calc + '0');
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}