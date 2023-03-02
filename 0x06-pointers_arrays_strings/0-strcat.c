#include "main.h"
/**
 * _strcat - function to concatenate strings
 * @dest: pointer variable for char
 * @src: pointer variable for char
 * Return: the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	char *str = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (str);
}
