#include "main.h"
#include <stddef.h>
/**
 * _strchr - function that locates a character in a string
 * @s: pointer variable to char datatype
 * @c: pointer variable to char datatype
 * Return: first occurence of c or NULL if none is found
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	return (NULL);
}
