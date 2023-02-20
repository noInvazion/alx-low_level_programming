#include <stdio.h>
/**
 * main - Entry point: function to print numbers from 0 to 9 with putchar
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
