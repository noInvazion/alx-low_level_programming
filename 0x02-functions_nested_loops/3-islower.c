#include "main.h"
/**
 * _islower - chdcks for lowercase character
 *
 * @c: this is the variable holdiing the character to be checked
 *
 * Return: 1 if char is lowercase, otherwise return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
