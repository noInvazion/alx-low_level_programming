#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: char array
 * noInvazion
 * Return: count variable
 */

int _strlen_recursion(char *s)
{
	int count = 1;

	if (*s == '\0')
		return (0);
	count += _strlen_recursion(s + 1);
	return (count);
}
