#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci series
 * Return: 0
 */

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum = 0;
	int count;

	for (count = 0; count < 98; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 98)
		{
			printf("\n");
		}
		else
		{
			printf(",");
			putchar(' ');
		}
	}
	return (0);
}
