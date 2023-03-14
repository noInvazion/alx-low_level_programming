#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <strings.h>

/**
 * _strspn - function that concatenates
 * @s: variable s
 * @accept: variable accept
 * Return: digit
 * noInvazion
 */

unsigned int _strspn(char *s, char *accept)
{
	return strspn(s, accept);
}
