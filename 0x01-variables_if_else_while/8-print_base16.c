#include <stdio.h>
/**
 * main - Entry point: hexadecimals
 *
 * Return: 0
 */
int main(void)
{
	int n;
	char s;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	}
	for (s = 'A'; s <= 'F'; s++)
	{
		putchar(s);
	}
	return (0);
}
