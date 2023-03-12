#include "main.h"
<<<<<<< HEAD
/**
 * _sqrt_recursion - function that returns the square root of a number
 * @n: variable n of integer datatype
 * Return: natural square root of n
 * noInvazion
 */

int _sqrt_recursion(int n)
{
	
=======

/**
 * check - checks for the square root
 * @a:int
 * @b:int
 * Return: int
 * noInvazion
 */
int check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check(a + 1, b));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
>>>>>>> 98183ed2fccb352733cfdc7f10a3eef3753cbb53
