#include <stdio.h>
/**
 * main - prints out the sum of even-valued Fibonacci series
 * Return: 0
 */

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, fibsum = 0;
	float totalSum;

	while (1)
	{
		fibsum = fib1 + fib2;
		if (fibsum > 4000000)
			break;

		if ((fibsum % 2) == 0)
			totalSum += fibsum;

		fib1 = fib2;
		fib2 = fibsum;
	}
	printf("%.0f\n", totalSum);

	return (0);
}
