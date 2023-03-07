#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: pointer variable to char datatype
 * @c: pointer variable to char datatype
 * Return: first occurence of c or NULL if none is found
 */

char *_strchr(char *s, char c)
{
	char *p = s;

	while (*p != '\0')
	{
		if (*p == c)
		{
			return p;
		}
		p++;
	}
	return (NULL);
}
