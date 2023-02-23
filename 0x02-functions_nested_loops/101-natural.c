#include <stdio.h>
/**
 * main - function that prints the multiples of 3 and 5 under 1024
 * @n: variable that holds the big number
 * Return: 0
 */

int main(void)
{
	int n = 1024;
	int i, sum = 0;

	for (i = 0; i < n; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
