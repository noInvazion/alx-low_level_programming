#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: pointer for s variable
 * Return: 0
 */

int _strlen(char *s)
{
	int i;

	for (i = 0;;)
	{
		if (*s != '\0')
		{
			i++;
		}
	}
	if (i < 10)
	{
		_putchar(i + '0');
		_putchar(' ');
	}
	else if (i < 100)
	{
		_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
		_putchar(' ');
	}
	return (0);
}
