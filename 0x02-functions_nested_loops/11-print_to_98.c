#include <stdio.h>
/**
 * print_to_98 - function that prints all numbers from n to 98
 * @n: variable for the starting point
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		for (n = n; n >= 98; n--)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
		}
		}
	}
	else
	{
		for (n = n; n <= 98; n++)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
		}
	}
}
