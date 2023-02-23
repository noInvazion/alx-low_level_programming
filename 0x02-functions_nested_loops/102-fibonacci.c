#include <stdio.h>
/**
 * main - Prints first 50 fibonacci numbers, starting with and 2
 * Return: 0
 */

int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum = 0;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
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
