#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: pointer variable to char datatype
 * @c: pointer variable to char datatype
 * Return: first occurence of c or NULL if none is found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c)
	{
		return (s);
	}

	return (NULL);
}
