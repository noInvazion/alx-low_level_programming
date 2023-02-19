#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Print if a number is negative or positive.
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int last = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, last);
	if (n < 6 && n != 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	return (0);
}
