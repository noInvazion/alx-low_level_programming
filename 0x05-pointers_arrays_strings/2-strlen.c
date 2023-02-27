#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: pointer for s variable
 * Return: 0
 */

int _strlen(char *s)
{
	int i = 0; /* start a loop counter */

	for (; *s++;)
	{
		i++;
	}
	return (i);
}
